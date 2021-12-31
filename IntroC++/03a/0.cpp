#include <iostream>
#include <string>

struct Pig {
    std::string m_name;
    int m_weight;

    Pig()
    {
        m_name = "Cochon";
        m_weight = 70;
    }
};

int main() {
    Pig pig;

    std::cout << "name: " << pig.m_name << std::endl;
    std::cout << "weight: " << pig.m_weight << std::endl;

    return 0;
}


