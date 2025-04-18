//
// Created by Yaohui Li on 2021/2/20.
//
class Debug
{
  public:
    constexpr Debug(bool b = true) : hw(b), io(b), other(b)
    {
    }

    constexpr Debug(bool h, bool i, bool o) : hw(h), io(i), other(o)
    {
    }

    constexpr bool any() const
    {
        return hw || io || other;
    }

    void set_hw(bool b)
    {
        hw = b;
    }

    void set_io(bool b)
    {
        io = b;
    }

    void set_other(bool b)
    {
        other = b;
    }

  private:
    bool hw;
    bool io;
    bool other;
};

int main()
{
    return 0;
}