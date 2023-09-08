#include <iostream>
#include <cstdio>

class Estadistica
{
public:
    Estadistica() {}
    virtual ~Estadistica() {}
};

class Salud : public Estadistica
{
public:
    Salud() {}
    virtual ~Salud() {}
};

class Cordura : public Estadistica
{
public:
    Cordura() {}
    virtual ~Cordura() {}
};

class Hambre : public Estadistica
{
public:
    Hambre() {}
    virtual ~Hambre() {}
};

class Fobia : public Estadistica
{
public:
    Fobia() {}
    virtual ~Fobia() {}
};
