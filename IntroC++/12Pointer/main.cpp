#include <cstdio>
#include <cstdlib>

struct C {
    C() {
        printf("céer l'objet!\n");
    }
    ~C() {
        printf("suprimé l'objet!\n");
    }
};

int main() {
    C *p = new C;

    if (rand() != 0) {
        printf("test ……\n");
        // delete p;   // Le programmeur oublie delete p;
        return 1;  //If à return 1 du coup delete p n’est pas exécuté
    }
    delete p;
    return 0;
}

