#include <iostream>
#include <cstdio>

class Elemento
{
public:
    Elemento() {}
    ~Elemento() {}
};

class Cofre : public Elemento
{
public:
    Cofre() {}
    ~Cofre() {}
};

class Estanteria : public Elemento
{
public:
    Estanteria() {}
    ~Estanteria() {}
};

class Caja : public Elemento
{
public:
    Caja() {}
    ~Caja() {}
};

class Cama : public Elemento
{
public:
    Cama() {}
    ~Cama() {}
};
