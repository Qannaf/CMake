#include <iostream>
#include <string>

struct Pig {
    std::string m_name;
    int m_weight;

explicit Pig(int weight)
        : m_name("Couchon pèse " + std::to_string(weight) + "kg")
        , m_weight(weight)
    {}
};

void show(const Pig& pig) {
    std::cout << "name: " << pig.m_name << std::endl;
    std::cout << "weight: " << pig.m_weight << std::endl;
}

int main() {
    //show(80);    // Erreur
    show(Pig(80));  // Ok

    return 0;
}

