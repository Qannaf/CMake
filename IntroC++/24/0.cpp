#include <memory>

struct C {
    std::shared_ptr<C> m_child;
    std::shared_ptr<C> m_parent;
};

int main() {
    auto parent = std::make_shared<C>();
    auto child = std::make_shared<C>();

    // Create cross-references.
    parent->m_child = child;
    child->m_parent = parent;

    parent = nullptr; // parent will not be freed! Because child is still pointing to him!
    child = nullptr; // child will not be freed either! Because parent is still pointing to him!

    return 0; 
}

