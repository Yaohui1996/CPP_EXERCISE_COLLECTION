#ifndef CPP_HOW_TO_PROGRAM_NINTH_INVOICE_H
#define CPP_HOW_TO_PROGRAM_NINTH_INVOICE_H

#include <cstdint>
#include <string>

class Invoice
{
  private:
    std::string code_;
    std::string description_;
    int32_t count_;
    int32_t price_;

  public:
    Invoice(const std::string &code, const std::string &description, const int32_t count, const int32_t price);
    const std::string &get_code() const;
    const std::string &get_description() const;
    int32_t get_count() const;
    int32_t get_price() const;
    void set_code(const std::string &code);
    void set_description(const std::string &description);
    void set_count(const int32_t count);
    void set_price(const int32_t price);
    int32_t get_invoice_amount() const;
};

#endif // CPP_HOW_TO_PROGRAM_NINTH_INVOICE_H
