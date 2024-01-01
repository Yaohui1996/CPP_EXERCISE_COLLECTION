#ifndef DATA_FRAME_HPP
#define DATA_FRAME_HPP

#include <cstddef>
#include <tuple>
#include <vector>

template <typename... Ts> class DataFrame
{
  private:
    class row_type_t
    {
      private:
        std::size_t row_index_;
        std::tuple<Ts...> row_data_;

      public:
        row_type_t(std::size_t id, Ts... args) : row_index_(id), row_data_(args...)
        {
        }
    };

  private:
    std::vector<row_type_t> data_;

  public:
    void insert(const row_type_t &row)
    {
        this->data_.push_back(row);
    }
};

#endif // DATA_FRAME_HPP