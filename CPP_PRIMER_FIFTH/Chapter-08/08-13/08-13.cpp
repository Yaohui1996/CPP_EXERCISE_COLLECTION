//
// Created by Yaohui Li on 2021/2/20.
//

#include <fstream>
#include <iostream>
#include <sstream>

#include <string>
#include <vector>

using namespace std;

struct PersonInfo
{
    string name;
    vector<string> phones;
};

int main()
{
    vector<PersonInfo> people;

    ifstream inFile;
    inFile.open("/Users/yaohui/Desktop/CPP_Primer_5th_Exercise/Chapter8/"
                "_08_13_phoneNumbers.txt",
                ios::in);

    string line;
    while (getline(inFile, line))
    {
        istringstream iss(line);
        PersonInfo peo;
        iss >> peo.name;
        string number;
        while (iss >> number)
            peo.phones.push_back(number);
        people.push_back(peo);
    }

    // 输出
    ostringstream oss;
    for (const auto &i : people)
    {
        oss << i.name << " ";
        for (const auto &j : i.phones)
            oss << j << " ";
        oss << endl;
    }

    cout << oss.str();

    return 0;
}