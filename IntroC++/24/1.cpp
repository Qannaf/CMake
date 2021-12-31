#include <memory>

struct C {
    std::shared_ptr<C> m_child;
    std::weak_ptr<C> m_parent;
};

int main() {
    auto parent = std::make_shared<C>();
    auto child = std::make_shared<C>();

    // Create cross-references.
    parent->m_child = child;
    child->m_parent = parent;

    parent = nullptr; // parent will be freed. Because child points to him as a **weak reference**
    child = nullptr; // child will be freed. because the parent pointing to child has already been freed

    return 0;
}

