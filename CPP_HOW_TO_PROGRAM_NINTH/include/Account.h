#ifndef CPP_HOW_TO_PROGRAM_NINTH_ACCOUNT_H
#define CPP_HOW_TO_PROGRAM_NINTH_ACCOUNT_H

#include <cstdint>
#include <limits>

class Account {
private:
  int32_t balance_ = std::numeric_limits<int32_t>::max();

public:
  explicit Account(const int32_t balance);
  void credit(const int32_t value);
  void debit(const int32_t value);
  int32_t getBalance() const;
};

#endif  // CPP_HOW_TO_PROGRAM_NINTH_ACCOUNT_H