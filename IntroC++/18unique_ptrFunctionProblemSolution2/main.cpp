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

// solution 1
void func(C* p) {p->do_something();}

// solution 2
std::vector<std::unique_ptr<C>> objlist;
void func(std::unique_ptr<C> p) {
    objlist.push_back(std::move(p));  // move objlist pour controler le cycle de vie 
}



int main() {
    std::unique_ptr<C> p = std::make_unique<C>();

    //func(p.get());                        // parfait
    func(std::move(p)); p->do_something();  // Error, p is empty!

    return 0;
}


