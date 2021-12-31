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
    std::unique_ptr<C> p = std::make_unique<C>();

    printf("before……\n");
    p = nullptr;// equivalent p.reset()  ou p=NULL;
    printf("……after\n");

    return 0;  
}

