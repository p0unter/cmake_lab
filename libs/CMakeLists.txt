add_library(helloLibrary 
            ${CMAKE_CURRENT_SOURCE_DIR}/hello/hello.cpp
            ${CMAKE_CURRENT_SOURCE_DIR}/hello/hello.hpp)

target_include_directories(helloLibrary PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_compile_definitions(helloLibrary PRIVATE HELLO_LIBRARY_VERSION=0.5)