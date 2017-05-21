cmake_minimum_required(VERSION 3.6)
project(cvproject)
find_package( OpenCV REQUIRED )
include_directories(${OpenCV_INCLUDE_DIRS})
set(CMAKE_CXX_STANDARD 11)
# grade executable from main.cpp
add_executable(grade main.cpp)
target_link_libraries(grade ${OpenCV_LIBS})
