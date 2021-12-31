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
    std::shared_ptr<C> p = std::make_shared<C>();        //count=1
    printf("\t\tcount = %ld\n", p.use_count());   // 1

    std::weak_ptr<C> weak_p = p;                     
    printf("After weak_ptr count = %ld\n", p.use_count()); // 1

    func(std::move(p)); 
    if (weak_p.expired())   printf("Error: weak reference has expired!") ;
    else                    weak_p.lock()->do_something(); 

    objlist.clear();                            
    printf("Clear vector \tcount = %ld\n", p.use_count());   // 0
    if (weak_p.expired()) printf("Error: Weak reference has expired!") ;
    else                  weak_p.lock()->do_something(); // will not execute

    return 0; 
}
