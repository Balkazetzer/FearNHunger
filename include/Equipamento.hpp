#include <iostream>
#include <cstdio>

class Equipamiento
{
public:
    Equipamiento() {}
    virtual ~Equipamiento() {}
};

class Libro : public Equipamiento
{
public:
    Libro() {}
    virtual ~Libro() {}
};

class Comida : public Equipamiento
{
public:
    Comida() {}
    virtual ~Comida() {}
};

class Arma : public Equipamiento
{
public:
    Arma() {}
    virtual ~Arma() {}
};

class Amuleto : public Equipamiento
{
public:
    Amuleto() {}
    virtual ~Amuleto() {}
};

class Pocion : public Equipamiento
{
public:
    Pocion() {}
    virtual ~Pocion() {}
};

class Planta : public Equipamiento
{
public:
    Planta() {}
    virtual ~Planta() {}
};

class MonedaDorada : public Equipamiento
{
public:
    MonedaDorada() {}
    virtual ~MonedaDorada() {}
};
