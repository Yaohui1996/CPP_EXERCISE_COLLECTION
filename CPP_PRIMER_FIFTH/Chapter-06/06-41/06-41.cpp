//
// Created by Yaohui Li on 2021/2/14.
//

char *init(int ht, int wd = 80, char bckgrnd = ' ');
/*
 * (a) init();//非法，没有ht初始值
 * (b) init(24,10);//合法
 * (c) init(14,'*');//合法，但是'*'被传入的时候会出错
 */

int main() { return 0; }