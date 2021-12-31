#include <iostream>
#include <string>

struct Pig {
    std::string m_name;
    int m_weight;
};

void show(Pig pig) {
    std::cout << "name: " << pig.m_name << std::endl;
    std::cout << "weight: " << pig.m_weight << std::endl;
}

int main() {
    Pig pig1 = {"Cochon", 80};   // Ok
    Pig pig2{"Cochon", 80};      // Ok
    // Pig pig3("Cochon", 80);   // Erreur

    show(pig1);
    return 0;
}


