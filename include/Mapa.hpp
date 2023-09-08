#include <iostream>
#include <cstdio>

class Mapa
{
public:
    Mapa() {}
    virtual ~Mapa() {}
};

class Mazmorra : public Mapa
{
public:
    Mazmorra() {}
    virtual ~Mazmorra() {}
};
