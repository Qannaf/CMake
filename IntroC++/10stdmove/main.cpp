#include <iostream>
#include <vector>

void test_copy() {
    std::vector<int> v1(10);
    std::vector<int> v2(200);

    v1 = v2;                  // Affectation des copies O(n)

    std::cout << "after copy:\n" << "v1 length " << v1.size() << std::endl;  // 200
    std::cout << "v2 length " << v2.size() << std::endl;  // 200
}

void test_move() {
    std::vector<int> v1(10);
    std::vector<int> v2(200);

    v1 = std::move(v2);      // Déplacement de l'affectation O(1)

    std::cout << "after move:\n"<< "v1 length " << v1.size() << std::endl;  // 200
    std::cout << "v2 length " << v2.size() << std::endl;  // 0
}

void test_swap() {
    std::vector<int> v1(10);
    std::vector<int> v2(200);

    std::swap(v1, v2);      // Échange des deux O(1)

    std::cout << "after swap:\n" << "v1 length " << v1.size() << std::endl;  // 200
    std::cout << "v2 length " << v2.size() << std::endl;  // 10
}

int main() {
    test_copy();
    test_move();
    test_swap();
    return 0;
}

