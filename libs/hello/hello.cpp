#include <iostream>
#include "hello.hpp"

void helloLibrary::showHello() {
    std::cout << "Hello world! Version: " << HELLO_LIBRARY_VERSION << "\n";
}