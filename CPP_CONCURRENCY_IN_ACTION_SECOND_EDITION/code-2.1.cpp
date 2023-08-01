#include <iostream>
#include <thread>

struct func {
  int &var_;
  func(int &v) : var_(v) {}
  void operator()() {
    for (std::size_t i = 0; i != 10000; ++i) {
      std::cout << var_ << std::endl;
    }
  }
};

void oops() {
  int some_local_state = 0;
  func my_func(some_local_state);
  std::thread my_thread(my_func);
  my_thread.detach();
}

int main() {
  oops();
  return 0;
}