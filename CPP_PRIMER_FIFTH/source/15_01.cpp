#include <iostream>
#include <ostream>
#include <string>

class Quote {
public:
  Quote() = default;
  Quote(const std::string &book, const double sales_price)
      : bookNo(book), price(sales_price) {}
  virtual ~Quote() = default;

public:
  std::string isbn() const;
  virtual double net_price(std::size_t n) const;

private:
  std::string bookNo;

protected:
  double price = 0.0;
};

class Bulk_quote : public Quote {
public:
  Bulk_quote() = default;
  Bulk_quote(const std::string &, const double, const std::size_t,
             const double);

public:
  double net_price(std::size_t n) const override;

private:
  std::size_t min_qty = 0;
  double discount = 0.0;
};

double print_total(std::ostream &os, const Quote &item, size_t n) {
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

std::string Quote::isbn() const { return bookNo; }

double Quote::net_price(std::size_t n) const { return price * n; }

double Bulk_quote::net_price(std::size_t n) const { return 5.0 * n; }

Bulk_quote::Bulk_quote(const std::string &book, const double p,
                       const std::size_t qty, const double disc)
    : Quote(book, p), min_qty(qty), discount(disc) {}
