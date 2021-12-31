#include <iostream>
#include <string>

struct Pig {
    std::string m_name;
    int m_weight;

    explicit Pig(std::string name, int weight): m_name(name), m_weight(weight)
    {}
};

void show(Pig pig) {
    std::cout << "name: " << pig.m_name << std::endl;
    std::cout << "weight: " << pig.m_weight << std::endl;
}

/*Pig func1() {
    return {"Cochon", 80};        // Erreur si explicit
}*/

Pig func2() {
    return Pig{"Cochon", 80};     // Ok
}

Pig func3() {
    return Pig("Cochon", 80);     // Ok
}

int main() {
    //Pig pig1 = {"Cochon", 80};    // Erreur si explicit
    Pig pig2{"Cochon", 80};       // Ok
    Pig pig3("Cochon", 80);       // Ok

    //Pig pig4{"Cochon", 80.1f};       // Erreur si explicit ou non
    Pig pig5("Cochon", 80.1f);       // Ok

    //show({"Cochon", 80});         // Erreur si explicit
    show(Pig("Cochon", 80));      // Ok

    return 0;
}

