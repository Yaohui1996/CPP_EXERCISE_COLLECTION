#ifndef CPP_HOW_TO_PROGRAM_NINTH_MAXIMUM_H
#define CPP_HOW_TO_PROGRAM_NINTH_MAXIMUM_H

template <typename T>
auto maximum(const T value1, const T value2, const T value3) -> T {
  T max_val = value1;
  if (value2 > max_val) {
    max_val = value2;
  }
  if (value3 > max_val) {
    max_val = value3;
  }
  return max_val;
}

#endif // CPP_HOW_TO_PROGRAM_NINTH_MAXIMUM_H