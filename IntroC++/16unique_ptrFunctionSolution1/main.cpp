#include <cstdio>
#include <memory>

struct C {
    C() {
        printf("Créer l'objet!\n");
    }

    ~C() {
        printf("Supprimer l'objet!\n");
    }

    void do_something() {
        printf("I'am playing!\n");
    }
};

void func(C *p) {
    p->do_something();
}

int main() {
    std::unique_ptr<C> p = std::make_unique<C>();
    func(p.get());
    return 0;
}

