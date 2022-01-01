#include <vector>
#include <iostream>

struct Pig {
    // Attributs
    std::string m_name;
    int m_weight;

    // Constructeur
    Pig(const std::string& name, const int& weight): m_name(name), m_weight(weight){}

    Pig(Pig const &other): m_name(other.m_name), m_weight(other.m_weight)
    {
        std::cout << "Copy a pig！" << std::endl;
    }
};

void show(Pig const &pig)  {
    std::cout << "name: " << pig.m_name << std::endl;
    std::cout << "weight: " << pig.m_weight << std::endl;
}

int main() {
    Pig pig{"Cochon", 80};
    show(pig);
    return 0;
}

