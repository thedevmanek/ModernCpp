cmake_minimum_required(VERSION 3.1)
project(task_2)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "results/bin")
add_library(ipb_arithmetic src/subtract.cpp src/sum.cpp)
include_directories(include include/ipb_arithmetic src results)
add_executable(${PROJECT_NAME} src/main.cpp src/sum.cpp src/subtract.cpp)
target_link_libraries(${PROJECT_NAME} ipb_arithmetic)
install(TARGETS ipb_arithmetic DESTINATION ${PROJECT_SOURCE_DIR}/install/lib)
# Installing Directories
install(TARGETS ipb_arithmetic DESTINATION ${PROJECT_SOURCE_DIR}/install/lib)
# Installing Directories
install(DIRECTORY include/ DESTINATION ${PROJECT_SOURCE_DIR}/install/include/)