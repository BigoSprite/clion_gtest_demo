cmake_minimum_required(VERSION 3.16)
project(clion_gtest_demo)

set(CMAKE_CXX_STANDARD 11)

# headers path
include_directories(
  ./include/
  ./src)

# sources path
aux_source_directory(./src SRC)

# libs path
link_directories(./lib)

# set libs variable
set(LIBS
  gtest) # libgtest.a

add_executable(${PROJECT_NAME} main.cpp ${SRC})

target_link_libraries(${PROJECT_NAME} ${LIBS})