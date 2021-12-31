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
    //std::shared_ptr<C> p (new C());   equivalent
    printf("\t\tcount = %ld\n", p.use_count());   // 1

    func(p);  // shared_ptr Copy allowed!                  count++;
    printf("call fun(p) \tcount = %ld\n", p.use_count());   // 2

    func(p);  //Multiple shared_ptrs                      count++
    printf("call fun(p) \tcount = %ld\n", p.use_count());   // 3
    p->do_something();  // Ok, the address pointed to by p did not change in the first place

    objlist.clear(); //                               count-2
    printf("clear vector\tcount = %ld\n", p.use_count()); // 1
    p->do_something(); //                             count=1

    return 0; 
}

