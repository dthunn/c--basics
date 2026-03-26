cmake_minimum_required(VERSION 3.20)
set(CMAKE_TOOLCHAIN_FILE "$ENV{VCPKG_ROOT}/scripts/buildsystems/vcpkg.cmake")
project(basics)

set(CMAKE_CXX_STANDARD 17)

add_executable(basics src/main.cpp
        src/add.cpp
        src/player.cpp)

find_package(fmt CONFIG REQUIRED)
target_link_libraries(basics PRIVATE fmt::fmt)
