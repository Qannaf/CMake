#include <memory>

struct C {
    std::unique_ptr<C> m_child;
    C *m_parent;
};

int main() {
    auto parent = std::make_unique<C>();
    auto child = std::make_unique<C>();

    // Create cross-references.
    parent->m_child = std::move(child); // transfer ownership of child to parent
    child->m_parent = parent.get();

    parent = nullptr; // parent will be freed. Because child points to him as the original pointer
    // At this point, child is also freed, because child is fully subordinate to parent

    return 0;
}
