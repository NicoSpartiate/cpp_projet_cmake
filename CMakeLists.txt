cmake_minimum_required(VERSION 3.0.0)
project(cpp_project_cmake VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(cpp_project_cmake src/main.cpp)

#include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
#
#include_directories(${CMAKE_CURRENT_SOURCE_DIR}/lib/SFML-2.5.1/include)
#target_link_libraries(cpp_project_cmake SFML-2.5.1) # .dll
## or
## target_link_libraries(cpp_project_cmake ${CMAKE_CURRENT_SOURCE_DIR}/lib/SFML-2.5.1/lib) # .lib

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
