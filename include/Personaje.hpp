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
    virtual ~PersonajeJugable() {}
};

class PersonajeNoJugable : public Personaje
{
public:
    PersonajeNoJugable() {}
    virtual ~PersonajeNoJugable() {}
};

class Cahara : public PersonajeJugable
{
public:
    Cahara() {}
    virtual ~Cahara() {}
};

class DArce : public PersonajeJugable
{
public:
    DArce() {}
    virtual ~DArce() {}
};

class Ragnvaldr : public PersonajeJugable
{
public:
    Ragnvaldr() {}
    virtual ~Ragnvaldr() {}
};

class Enki : public PersonajeJugable
{
public:
    Enki() {}
    virtual ~Enki() {}
};

class Girl : public PersonajeNoJugable
{
public:
    Girl() {}
    virtual ~Girl() {}
};

class LEgarde : public PersonajeNoJugable
{
public:
    LEgarde() {}
    virtual ~LEgarde() {}
};

class Nashrah : public PersonajeNoJugable
{
public:
    Nashrah() {}
    virtual ~Nashrah() {}
};

class Moonless : public PersonajeNoJugable
{
public:
    Moonless() {}
    virtual ~Moonless() {}
};
