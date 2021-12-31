#include <cstdlib>
#include <iostream>
#include <cstring>

struct Vector {
        // Attributs
    size_t m_size;
    int *m_data;

    // Constructeur
    Vector(const size_t& n) : m_size(n), m_data((int *)malloc(n * sizeof(int))){ }

    Vector(Vector const &other) {
        m_size = other.m_size;
        m_data = (int *)malloc(m_size * sizeof(int));
        memcpy(m_data, other.m_data, m_size * sizeof(int));
    }

    // Desconstructeur
    ~Vector() {free(m_data);}

    size_t size() const {return m_size;}

    void resize(const size_t& size) {
        m_size = size;
        m_data = (int *)realloc(m_data, m_size);
    }

    int &operator[](size_t index)const {   return m_data[index];}
 
  

    Vector &operator=(Vector const &other) {
        this->~Vector();             // Détruisez d'abord l'existant
        new (this) Vector(other) ; // reconstruire à nouveau (déplacement new)
        return *this ; // supporte la concaténation de signes égaux : v1 = v2 = v3
    }

};

int main() {
    Vector v1(32);
    Vector v2(64);

    v2 = v1;

    return 0;
}
