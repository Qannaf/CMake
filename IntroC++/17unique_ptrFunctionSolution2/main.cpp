#include <cstdio>
#include <memory>
#include <vector>

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

std::vector<std::unique_ptr<C>> objlist;

void func(std::unique_ptr<C> p) {
    objlist.push_back(std::move(p));  // move objlist pour controler le cycle de vie 
    p->do_something();
}

int main() {
    std::unique_ptr<C> p = std::make_unique<C>();
    printf("Before：%p\n", p.get());  // null
    func(std::move(p));    // Transferring pointer control by moving the constructor
    printf("After：%p\n", p.get());  // null，Because moving will clear the original object
    return 0;
}

