cd ../
rmdir /s build
mkdir build
cd build
cmake ../source -DCMAKE_GENERATOR_PLATFORM=x64 -G"Visual Studio 14 2015"
pause