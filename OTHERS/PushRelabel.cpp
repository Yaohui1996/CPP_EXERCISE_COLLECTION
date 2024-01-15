#include <cstddef>
#include <cstdio>
#include <iterator>
#include <stdlib.h>
#include <stdio.h>

#define NODES 6
#define MIN(X,Y) ((X) < (Y) ? (X) : (Y))
#define INFINITE 10000000

int **flow, **capacities, i;

void printMatrix(const int * const * M) {
  int i, j;
  for (i = 0; i < NODES; i++) {
    for (j = 0; j < NODES; j++)
      printf("%d\t",M[i][j]);
    printf("\n");
  }
  printf("\n");
}


void push(const int * const * C, int ** F, int *excess, int u, int v) {
  int send = MIN(excess[u], C[u][v] - F[u][v]);
  F[u][v] += send;
  F[v][u] -= send;
  excess[u] -= send;
  excess[v] += send;
}

void relabel(const int * const * C, const int * const * F, int *height, int u) {
  int v;
  int min_height = INFINITE;
  for (v = 0; v < NODES; v++) {
      printf("正在遍历所有的点, 寻找relabel的min_height... [C[u][v]=%d] [F[u][v]=%d] [u=%d] [v=%d] [u.height=%d] "
             "[v.height=%d]\n",
             C[u][v], F[u][v], u, v, height[u], height[v]);
      if (C[u][v] - F[u][v] > 0)
      {
          min_height = MIN(min_height, height[v]);
          height[u] = min_height + 1;
    }
  }
};

void discharge(const int * const * C, int ** F, int *excess, int *height, int *seen, int u) {
  while (excess[u] > 0) {
    if (seen[u] < NODES) {
      int v = seen[u];
      printf("正在遍历每个邻居, 寻求push机会... [C[u][v]=%d] [F[u][v]=%d] [u=%d] [v=%d] [u.height=%d] [v.height=%d]\n",
             C[u][v], F[u][v], u, v, height[u], height[v]);
      if ((C[u][v] - F[u][v] > 0) && (height[u] > height[v]))
      {
          printf("before push [u=%d] [v=%d]\n", u, v);
          printMatrix(flow);
          push(C, F, excess, u, v);
          printf("after push [u=%d] [v=%d]\n", u, v);
          printMatrix(flow);
      }
      else
      {
          seen[u] += 1;
      }
    } else {
      printf("before relabel [u=%d] [height=%d]\n",u,height[u]);
      relabel(C, F, height, u);
      printf("after relabel [u=%d] [height=%d]\n",u,height[u]);
      seen[u] = 0;
    }
  }
}

void moveToFront(int i, int *A) {
  int temp = A[i];
  int n;
  for (n = i; n > 0; n--) {
    A[n] = A[n-1];
  }
  A[0] = temp;
}


int pushRelabel(const int * const * C, int ** F, int source, int sink) {
  int *excess, *height, *list, *seen, i, p;

  excess = (int *) calloc(NODES, sizeof(int));
  height = (int *) calloc(NODES, sizeof(int));
  seen = (int *) calloc(NODES, sizeof(int));

  list = (int *) calloc((NODES-2), sizeof(int));

  for (i = 0, p = 0; i < NODES; i++){
    if ((i != source) && (i != sink)) {
      list[p] = i;
      p++;
    }
  }

  height[source] = NODES;
  excess[source] = INFINITE;
  for (i = 0; i < NODES; i++)
  {
      printf("[init] before push [u=%d] [v=%d]\n", source, i);
      printMatrix(flow);
      push(C, F, excess, source, i);
      printf("[init] after push [u=%d] [v=%d]\n", source, i);
      printMatrix(flow);
  }

  p = 0;
  while (p < NODES - 2) {
    int u = list[p];
    int old_height = height[u];
    discharge(C, F, excess, height, seen, u);
    if (height[u] > old_height) {
      moveToFront(p, list);
      p = 0;
    } else {
      p += 1;
    }
  }
  int maxflow = 0;
  for (i = 0; i < NODES; i++)
    maxflow += F[source][i];

  free(list);

  free(seen);
  free(height);
  free(excess);

  return maxflow;
}


int main(void) {
  flow = (int **) calloc(NODES, sizeof(int*));
  capacities = (int **) calloc(NODES, sizeof(int*));
  for (i = 0; i < NODES; i++) {
    flow[i] = (int *) calloc(NODES, sizeof(int));
    capacities[i] = (int *) calloc(NODES, sizeof(int));
  }

  // Sample graph
  // capacities[0][1] = 2;
  // capacities[0][2] = 9;
  // capacities[1][2] = 1;
  // capacities[1][3] = 0;
  // capacities[1][4] = 0;
  // capacities[2][4] = 7;
  // capacities[3][5] = 7;
  // capacities[4][5] = 4;
  capacities[0][1] = 15;
  capacities[0][3] = 4;
  capacities[1][2] = 12;
  capacities[2][3] = 3;
  capacities[2][5] = 7;
  capacities[3][4] = 10;
  capacities[4][1] = 5;
  capacities[4][5] = 10;

  printf("Capacity:\n");
  printMatrix(capacities);

  printf("Max Flow:\n%d\n", pushRelabel(capacities, flow, 0, 5));

  printf("Flows:\n");
  printMatrix(flow);

  return 0;
}