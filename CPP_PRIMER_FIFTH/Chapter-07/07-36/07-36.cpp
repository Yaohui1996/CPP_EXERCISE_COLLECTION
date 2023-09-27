//
// Created by Yaohui Li on 2021/2/19.
//

/*
struct X {
    X(int i, int j) : base(i), rem(base % j) {}

    int rem, base;
};
*/
struct X
{
    X(int i, int j) : base(i), rem(i % j)
    {
    }

    int rem, base;
};

int main()
{
    return 0;
}

/*
 * base 改为 i
 */