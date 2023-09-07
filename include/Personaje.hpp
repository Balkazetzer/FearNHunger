#include <iostream>
#include <cstdio>

class Personaje
{
public:
    Personaje() {}
    virtual ~Personaje() {}
};

class PersonajeJugable : public Personaje
{
public:
    PersonajeJugable() {}
};

class PersonajeNoJugable : public Personaje
{
public:
    PersonajeNoJugable() {}
};

class Cahara : public PersonajeJugable
{
public:
    Cahara() {}
};

class DArce : public PersonajeJugable
{
public:
    DArce() {}
};

class Ragnvaldr : public PersonajeJugable
{
public:
    Ragnvaldr() {}
};

class Enki : public PersonajeJugable
{
public:
    Enki() {}
};

class Girl : public PersonajeNoJugable
{
public:
    Girl() {}
};

class LEgarde : public PersonajeNoJugable
{
public:
    LEgarde() {}
};

class Nashrah : public PersonajeNoJugable
{
public:
    Nashrah() {}
};

class Moonless : public PersonajeNoJugable
{
public:
    Moonless() {}
};
