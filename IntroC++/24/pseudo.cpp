struct C {
    // When a class has unique_ptr as a member variable.
    std::unique_ptr<D> m_pD;

    // The copy constructor/assignment function is implicitly removed.
    // C(C const &) = delete;
    // C &operator=(C const &) = delete;

    // The move constructor/assignment function is unaffected by.
    // C(C &&) = default;
    // C &operator=(C &&) = default;
};

