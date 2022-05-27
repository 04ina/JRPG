cmake_minimum_required(VERSION 3.11) #you can set whatever version you use

# set the project name & version
project(TestProject)

set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake")


# add include directories
include_directories(include)

# add the source directories
file(GLOB SRCS src/*.c)

# add the executable
add_executable(TestProject ${SRCS})

find_package(SFML 2.5 COMPONENTS system window graphics audio network REQUIRED)
find_package(OpenGL)
find_package (Threads REQUIRED)


target_link_libraries(TestProject PRIVATE m csfml-system csfml-window csfml-graphics csfml-audio csfml-network ${OPENGL_LIBRARIES} ${CMAKE_THREAD_LIBS_INIT})
