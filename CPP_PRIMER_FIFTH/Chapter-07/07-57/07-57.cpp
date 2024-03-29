//
// Created by Yaohui Li on 2021/2/20.
//

#include <string>

using std::string;

class Account
{
  public:
    void calculate()
    {
        amount += amount * interestRate;
    }

    static double rate()
    {
        return interestRate;
    }

    static void rate(double newRate)
    {
        interestRate = newRate;
    }

  private:
    string owner;
    double amount;
    static double interestRate;
    static constexpr double todayRate = 42.42;

    static double initRate()
    {
        return todayRate;
    }
};

double Account::interestRate = initRate();

int main()
{
    return 0;
}