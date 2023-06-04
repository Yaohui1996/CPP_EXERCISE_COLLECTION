#include <cstdint>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <random>

using namespace std;

void useLocal();
void useStaticLocal();
void useGlobal();

int32_t x = 1; // global variable

int main() {
  cout << "global x in main is " << x << endl;
  int32_t x = 5;
  cout << "local x in main's outer scope is " << x << endl;
  { // start new scope
    int32_t x = 7;
    cout << "local x in main's inner scope is " << x << endl;
  } // end new scope
  cout << "local x in main's outer scope is " << x << endl;
  useLocal();
  useStaticLocal();
  useGlobal();
  useLocal();
  useStaticLocal();
  useGlobal();
  cout << "\nlocal x in main is " << x << endl;
  return 0;
} // end main function

void useLocal() {
  int32_t x = 25;
  cout << "\nlocal x is " << x << " on entering useLocal" << endl;
  ++x;
  cout << "\nlocal x is " << x << " on exiting useLocal" << endl;
} // end function useLocal

void useStaticLocal() {
  static int32_t x = 50;
  cout << "\nlocal static x is " << x << " on entering useStaticLocal" << endl;
  ++x;
  cout << "\nlocal static x is " << x << " on exiting useStaticLocal" << endl;
} // end function useStaticLocal

void useGlobal() {
  cout << "\nglobal x is " << x << " on entering useGlobal" << endl;
  x *= 10;
  cout << "\nglobal x is " << x << " on exiting useGlobal" << endl;
} // end function useGlobal