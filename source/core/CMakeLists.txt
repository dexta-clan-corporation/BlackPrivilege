include_directories("../")
file(GLOB sources *.h *.cpp)
add_library(Core SHARED ${sources})