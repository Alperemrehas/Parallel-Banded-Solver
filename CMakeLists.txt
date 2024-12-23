cmake_minimum_required(VERSION 3.10)

project(ParallelBandedSolverTests)

set(CMAKE_CXX_STANDARD 17)

# Add paths to headers and source files
include_directories(../include)
file(GLOB SOURCES ../src/*.cpp)

# Add test executables
add_executable(test_banded_matrix test_banded_matrix.cpp ${SOURCES})
add_executable(test_solver test_solver.cpp ${SOURCES})
add_executable(test_io test_io.cpp ${SOURCES})

# Link MPI for the solver test
find_package(MPI REQUIRED)
target_link_libraries(test_solver MPI::MPI_CXX)
