# CMakeList.txt : CMake project for Firstcpp_program, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (Firstcpp_program "Firstcpp_program.cpp" "Firstcpp_program.h" "main.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Firstcpp_program PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
