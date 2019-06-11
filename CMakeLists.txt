include_directories(${CMAKE_CURRENT_SOURCE_DIR}/header)
add_library(PocketLib     ${CMAKE_CURRENT_SOURCE_DIR}/src/Registry.cpp)

add_executable(pocketlibtests tests.cpp)

target_link_libraries(pocketlibtests gtest)