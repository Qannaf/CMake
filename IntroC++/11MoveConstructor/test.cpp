C c1 = c2;              // copy constructor

C c1 = std::move(c2);   // move constructor
C c1 = C();             // move constructor

c1 = c2;                // copy assignment =

c1 = C();               // move the assignment =

c1 = std::move(c2);     // move function
return c2;              // move function

