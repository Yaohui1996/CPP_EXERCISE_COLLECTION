find . -name "*.h" | xargs clang-format --style=LLVM -i
find . -name "*.cpp" | xargs clang-format --style=LLVM -i
