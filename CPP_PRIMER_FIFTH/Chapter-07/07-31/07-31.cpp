//
// Created by Yaohui Li on 2021/2/19.
//

class Y;

class X {
public:
  Y *pointToY;

private:
};

class Y {
  X objOfX;
};

int main() { return 0; }