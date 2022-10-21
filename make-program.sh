if [ -d "build-debug" ]
then
    echo "build-debug will be cleaned..."
    rm -rf build-debug
    echo "build-debug has been cleaned!"
fi
echo "create build-debug..."
mkdir build-debug
echo "create build-debug finished!"
cmake -S . -B build-debug -DCMAKE_BUILD_TYPE=Debug
make -C build-debug -j6

if [ -d "build-release" ]
then
    echo "build-release will be cleaned..."
    rm -rf build-release
    echo "build-release has been cleaned!"
fi
echo "create build-release..."
mkdir build-release
echo "create build-release finished!"
cmake -S . -B build-release -DCMAKE_BUILD_TYPE=Release
make -C build-release -j6
