#include <iostream>
#include <cstdio>

class Elemento
{
public:
    Elemento() {}
    virtual ~Elemento() {}
};

class Cofre : public Elemento
{
public:
    Cofre() {}
};

class Estanteria : public Elemento
{
public:
    Estanteria() {}
};

class Caja : public Elemento
{
public:
    Caja() {}
};

class Cama : public Elemento
{
public:
    Cama() {}
};
