cmake_minimum_required(VERSION 3.14)
project(cpp_basic)

set(CMAKE_CXX_STANDARD 14)

aux_source_directory(cpp-basic DIR_SRCS)

add_executable(cpp_basic ${DIR_SRCS} cpp-basic/variable-type.cpp cpp-basic/src/points.cpp cpp-basic/src/points.h cpp-basic/src/ref.cpp cpp-basic/src/datetime.cpp cpp-basic/src/io.cpp cpp-basic/src/class.cpp)
