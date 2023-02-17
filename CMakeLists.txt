cmake_minimum_required(VERSION 3.0.0)
project(cpp_project_cmake)

include_directories(lib/inc)
add_subdirectory(src)
add_subdirectory(lib)

#cmake_minimum_required(VERSION 3.0.0)
#project(cpp_project_cmake VERSION 0.1.0)
#
#include(CTest)
#enable_testing()
#
#add_executable(cpp_project_cmake src/main.cpp)
#
##include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
##
##include_directories(${CMAKE_CURRENT_SOURCE_DIR}/lib/SFML-2.5.1/include)
##target_link_libraries(cpp_project_cmake SFML-2.5.1) # .dll
### or
### target_link_libraries(cpp_project_cmake ${CMAKE_CURRENT_SOURCE_DIR}/lib/SFML-2.5.1/lib) # .lib
#
#set(CPACK_PROJECT_NAME ${PROJECT_NAME})
#set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
#include(CPack)

##-----------------------------------------------------------------------------------------------------
## Set the minimum version of CMake that can be used
## To find the cmake version run
## $ cmake --version
#cmake_minimum_required(VERSION 3.0.0)
#
## Set the project name
#project(cpp_project_cmake VERSION 0.1.0)
#
## Create a sources variable with a link to all cpp files to compile
#set(SOURCES
#    src/myHeader.cpp
#    src/main.cpp
#)
#
## Add an executable with the above sources
#add_executable(cpp_project_cmake ${SOURCES})
#
## Set the directories that should be included in the build command for this target
## when running g++ these will be included as -I/directory/path/
#target_include_directories(cpp_project_cmake
#    PRIVATE 
#        ${PROJECT_SOURCE_DIR}/include
#)


#message("CMAKE_INCLUDE_PATH: " ${CMAKE_INCLUDE_PATH})