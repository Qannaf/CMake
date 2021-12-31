#include <iostream>
#include<string>

struct Pig{
    std::string m_name;
    int m_weight;
    Pig()=default;
    Pig(const std::string& name,const int& weight): m_name(name),m_weight(weight)
    {std::cout<<"jfjfj";}
    Pig(const Pig& )=delete;
    Pig& operator=(const Pig&)=delete;
};


int main()
{
    Pig p1;
    std::cout<<"name : "<<p1.m_name<<"\n";
    std::cout<<"weight : "<<p1.m_weight<<"\n";
}











struct C {
    C(); // default constructor

    C(C const &c); // copy constructor
    C(C &&c); // move constructor (introduced in C++11)
    C &operator=(C const &c); // copy assignment function
    C &operator=(C &&c); // move assignment function (introduced in C++11)

    ~C(); // deconstruct function
};

