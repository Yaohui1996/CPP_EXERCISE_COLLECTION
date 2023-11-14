if [ -d "build" ]
then
    echo "build will be cleaned..."
    rm -rf build
    echo "build has been cleaned!"
fi
echo "create build..."
mkdir build
echo "create build finished!"
cmake -S . -B build -G "Ninja" -DCMAKE_BUILD_TYPE=Release
ninja -C build -j 10