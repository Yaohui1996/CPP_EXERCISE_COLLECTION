#include <iostream>
#include <ostream>
#include <string>

class Quote {
 public:
  std::string isbn() const;
  virtual double net_price(std::size_t n) const;
};

class Bulk_quote : public Quote {
 public:
  double net_price(std::size_t n) const override;
};

double print_total(std::ostream& os, const Quote& item, size_t n) {
  double ret = item.net_price(n);
  os << "ISBN:" << item.isbn() << "#sold: " << n << "total due: " << ret
     << std::endl;
  return ret;
}

int main() {
  Quote quote;
  Bulk_quote bulk_quote;
  print_total(std::cout, quote, 1);
  print_total(std::cout, bulk_quote, 5);
  return 0;
}

std::string Quote::isbn() const { return "example isbn"; }

double Quote::net_price(std::size_t n) const { return 1.0 * n; }

double Bulk_quote::net_price(std::size_t n) const { return 5.0 * n; }
