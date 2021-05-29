include_directories("../")
file(GLOB sources *.h *.cpp)
add_executable(Example ${sources})