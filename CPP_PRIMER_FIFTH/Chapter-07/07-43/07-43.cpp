//
// Created by Yaohui Li on 2021/2/20.
//

class NoDefault
{
  public:
    NoDefault(int n) : number(n)
    {
    }

  private:
    int number = 0;
};

class C
{
  public:
    C() : member(0)
    {
    }

  private:
    NoDefault member;
};

int main()
{
    return 0;
}