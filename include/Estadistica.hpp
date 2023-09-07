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
};

class Cordura : public Estadistica
{
public:
    Cordura() {}
};

class Hambre : public Estadistica
{
public:
    Hambre() {}
};

class Fobia : public Estadistica
{
public:
    Fobia() {}
};
