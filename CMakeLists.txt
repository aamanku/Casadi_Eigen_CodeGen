cmake_minimum_required(VERSION 3.11)
project(casadi_eigen_codegen)

set(CMAKE_CXX_STANDARD 17)
#optimization flags for release
set(CMAKE_CXX_FLAGS_RELEASE "-Ofast -march=native -DNDEBUG ")

#optimization flags for debug
set(CMAKE_CXX_FLAGS_DEBUG "-O0 -g")


# define a variable for the source directory to be used in the code\
add_definitions(-DSOURCE_DIR="${CMAKE_SOURCE_DIR}")


find_package(casadi REQUIRED)
find_package(Eigen3 REQUIRED)

add_executable(casadi_eigen_codegen src/GenerateEigenFunction.cpp)
target_link_libraries(casadi_eigen_codegen casadi Eigen3::Eigen)
target_include_directories(casadi_eigen_codegen PUBLIC include)

### Test of generated code
add_executable(test_generated_code src/TestUseEigenFunction.cpp codegenEigen/src/myfunction.cpp)
target_include_directories(test_generated_code PRIVATE codegenEigen/include)
target_link_libraries(test_generated_code Eigen3::Eigen)

