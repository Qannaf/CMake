#include <iostream>
#include <string>

struct Pig {
    std::string m_name;
    int m_weight;

    Pig(const int& weight)
        : m_name("Cochon pèse " + std::to_string(weight) + "kg")
        , m_weight(weight)
    {}
};

int main() {
    Pig pig = 80;

    std::cout << "name: " << pig.m_name << std::endl;
    std::cout << "weight: " << pig.m_weight << std::endl;

    return 0;
}


