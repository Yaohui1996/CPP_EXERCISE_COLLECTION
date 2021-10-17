//
// Created by Yaohui Li on 2021/2/20.
//
#include <iostream>
#include <fstream>
#include <sstream>

#include <vector>
#include <string>

using std::ifstream;
using std::ios;
using std::istringstream;

using std::vector;
using std::string;


using std::cerr;
using std::cout;
using std::endl;

int main() {
    vector<string> allLines;

    ifstream inFile;
    inFile.open("/Users/yaohui/Desktop/CPP_Primer_5th_Exercise/Chapter8/_08_06_books_out.txt", ios::in);
    if (!inFile) {
        cerr << "打开文件失败" << endl;
    } else {
        string line;
        while (getline(inFile, line)) {
            allLines.push_back(line);
        }
    }


    for (const auto &line : allLines) {
        istringstream iss(line);
        string word;
        while (iss >> word) {
            cout << word << endl;
        }
    }


    return 0;
}