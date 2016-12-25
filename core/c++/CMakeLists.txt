cmake_minimum_required(VERSION 3.6)
project(dride_core)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(dir ${CMAKE_CURRENT_SOURCE_DIR})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${dir}/bin")


find_package(OpenCV REQUIRED)

set(SOURCE_FILES src/main.cpp)
add_executable(dride_core ${SOURCE_FILES})


include_directories(${OpenCV_INCLUDE_DIRS})
target_link_libraries(dride_core ${OpenCV_LIBS})

