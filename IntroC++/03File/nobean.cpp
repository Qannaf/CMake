#include <fstream>
#include <iostream>
#include <stdexcept>

void test() {
    std::ofstream fout("a.txt");
    fout << "Qannaf AL-SAHMI\n";
    fout.close();
    throw std::runtime_error("erreur1");
    fout << "il y a une erreur\n";
}

int main() {
    try {
        test();
    } catch (std::exception const &e) {
        std::cout << "l'erreur est ：" << e.what() << std::endl;
    }
    return 0;
}

