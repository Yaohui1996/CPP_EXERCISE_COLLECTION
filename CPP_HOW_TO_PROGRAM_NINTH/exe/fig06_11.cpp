#include <cstdint>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>

using namespace std;

uint32_t rollDice();

int main()
{
    enum Status
    {
        CONTINUE,
        WON,
        LOST
    };
    srand(static_cast<uint32_t>(time(0)));
    uint32_t my_point = 0; // 目标点数
    Status gameStatus = Status::CONTINUE;

    uint32_t sum_of_dice = rollDice();
    switch (sum_of_dice)
    {
    case 7:
    case 11:
        gameStatus = Status::WON;
        break;
    case 2:
    case 3:
    case 12:
        gameStatus = Status::LOST;
        break;
    default:
        gameStatus = Status::CONTINUE;
        my_point = sum_of_dice;
        cout << "point is: " << my_point << endl;
        break;
    } // end switch

    while (gameStatus == Status::CONTINUE)
    {
        sum_of_dice = rollDice();
        if (sum_of_dice == my_point)
        {
            gameStatus = Status::WON;
        }
        else
        {
            if (sum_of_dice == 7)
            {
                gameStatus = Status::LOST;
            }
        }
    } // end while

    if (gameStatus == Status::WON)
    {
        cout << "Player Won!" << endl;
    }
    else
    {
        cout << "Player Lost!" << endl;
    }

    return 0;
} // end main function

uint32_t rollDice()
{
    const uint32_t die1 = 1 + rand() % 6;
    const uint32_t die2 = 1 + rand() % 6;
    const auto sum = die1 + die2;
    cout << "Player rolled " << die1 << " + " << die2 << " = " << sum << endl;
    return sum;
} // end function rollDice