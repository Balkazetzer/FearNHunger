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
    virtual ~Cofre() {}
};

class Estanteria : public Elemento
{
public:
    Estanteria() {}
    virtual ~Estanteria() {}
};

class Caja : public Elemento
{
public:
    Caja() {}
    virtual ~Caja() {}
};

class Cama : public Elemento
{
public:
    Cama() {}
    virtual ~Cama() {}
};
