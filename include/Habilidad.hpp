#include <iostream>
#include <cstdio>

class Habilidad
{
public:
    Habilidad() {}
    virtual ~Habilidad() {}
};

class Devorar : public Habilidad
{
public:
    Devorar() {}
};

class Robar : public Habilidad
{
public:
    Robar() {}
};

class Hablar : public Habilidad
{
public:
    Hablar() {}
};
