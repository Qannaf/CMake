#include <fmt/core.h>
#include <iostream>

int main() {
    std::string msg = fmt::format("Hello World \t The answer is {}.\n", 42);
    std::cout << msg << std::endl;
    return 0;
}