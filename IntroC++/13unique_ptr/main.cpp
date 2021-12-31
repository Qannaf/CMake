#include <cstdio>
#include <memory>

struct C {
    C() {
        printf("céer l'objet!\n");
    }
    ~C() {
        printf("suprimé l'objet!\n");
    }
};

int main() {
  //std::unique_ptr<C> p(new(C));              //C *p = new C;
    std::unique_ptr<C> p= std::make_unique<C>(); // C *p = new C;

    if (rand() != 0) {
        printf("test ……\n");
        return 1;  
    }
    return 0;
}


