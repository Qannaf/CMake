#include <iostream>
#include <string>

struct Demo {
explicit Demo(std::string a, std::string b) {
        std::cout << "Demo(" << a << ',' << b << ')' << std::endl;
    }
};

struct Pig {
    std::string m_name{"Cochon"};
    int m_weight = 80;
    Demo m_demo{"Hello", "world"};        // Ok
    //Demo m_demo1 = {"Hello", "world"};  // Erreur
};

void show(Pig pig) {
    std::cout << "name: " << pig.m_name << std::endl;
    std::cout << "weight: " << pig.m_weight << std::endl;
}

int main() {
    Pig pig;

    show(pig);
    return 0;
}

