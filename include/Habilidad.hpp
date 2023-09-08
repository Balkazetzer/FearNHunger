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
    virtual ~Devorar() {}
};

class Robar : public Habilidad
{
public:
    Robar() {}
    virtual ~Robar() {}
};

class Hablar : public Habilidad
{
public:
    Hablar() {}
    virtual ~Hablar() {}
};
