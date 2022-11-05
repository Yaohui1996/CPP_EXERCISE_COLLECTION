#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

struct Sales_data {
  string bookNo;
  unsigned int soldNums = 0;
  double averageBookPrice = 0.0;
};

int main() {
  Sales_data book;
  cin >> book.bookNo >> book.soldNums >> book.averageBookPrice;
  cout << "the book No. is: " << book.bookNo << endl;
  cout << "the number of sold is: " << book.soldNums << endl;
  cout << "the average price is: " << book.averageBookPrice << endl;

  Sales_data book2;
  cin >> book2.bookNo >> book2.soldNums >> book2.averageBookPrice;

  cout << "the total numbers is: " << book.soldNums + book2.soldNums << endl;
  cout << "the average price is: "
       << (book.averageBookPrice * book.soldNums +
           book2.averageBookPrice * book2.soldNums) /
              (book.soldNums + book2.soldNums)
       << endl;

  return 0;
}