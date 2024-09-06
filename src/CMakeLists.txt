add_executable(HelloWorld main.cpp)

add_library(HelloWorldLib print_info.cpp)

find_package(fmt CONFIG REQUIRED)

target_link_libraries(HelloWorld PRIVATE HelloWorldLib)

target_link_libraries(HelloWorldLib PRIVATE fmt)
target_include_directories(HelloWorldLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

