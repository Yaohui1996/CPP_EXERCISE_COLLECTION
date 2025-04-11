ulimit -c unlimited
ulimit -a

if [ -d "build" ]
then
    echo "build will be cleaned..."
    rm -rf build
    echo "build has been cleaned!"
fi
echo "create build..."
mkdir build
echo "create build finished!"

cmake -S . -B build -G "Ninja" -DCMAKE_BUILD_TYPE=Debug -DCMAKE_C_COMPILER=/opt/homebrew/opt/llvm/bin/clang -DCMAKE_CXX_COMPILER=/opt/homebrew/opt/llvm/bin/clang++ -DCMAKE_EXE_LINKER_FLAGS="-L/opt/homebrew/opt/llvm/lib/c++ -L/opt/homebrew/opt/llvm/lib/unwind -lunwind" -DCMAKE_C_FLAGS="-I/opt/homebrew/opt/llvm/include" -DCMAKE_CXX_FLAGS="-I/opt/homebrew/opt/llvm/include"

ninja -C build