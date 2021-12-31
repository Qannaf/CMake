#include <cstdio>
#include <memory>
#include <vector>

struct C {
    int m_number;
    C():m_number(42){printf("Créer l'objet!\n");}

    ~C() {
        printf("Supprimer l'objet!\n");
        m_number=-2333333;
    }

    void do_something() {
        printf("I'am playing! %d \n",m_number);
    }
};

std::vector<std::shared_ptr<C>> objlist;
void func(std::shared_ptr<C> p) {
    objlist.push_back(std::move(p));  // move objlist pour controler le cycle de vie 
}

int main() {
    std::shared_ptr<C> p = std::make_shared<C>(); //                                                count=1

    func(p); // shared_ptr allows copying! Share ownership with current pointer, add 1 to reference count++
    func(p); // multiple times is fine ~ multiple shared_ptrs will share ownership, reference       count++

    p->do_something();

    objlist.clear(); // just handed over by p to func to end its life cycle! Reference               count-2

    p->do_something(); // normal execution, as the reference count=1 and will not be freed           count=1
    return 0; //                                                                                     count=0
}


