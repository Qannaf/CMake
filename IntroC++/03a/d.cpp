#include <iostream>
#include <string>

struct Pig {
    std::string m_name;
    int m_weight{0};
};

void show(Pig pig) {
    std::cout << "name: " << pig.m_name << std::endl;
    std::cout << "weight: " << pig.m_weight << std::endl;
}

int main() {
    Pig pig1{"Cochon"};  // m_weight{0} 
    Pig pig2{.m_weight=60}; // >=C++ 14 
    show(pig1);
    show(pig2);
    return 0;
}

