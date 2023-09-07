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
};

class Comida : public Equipamiento
{
public:
    Comida() {}
};

class Arma : public Equipamiento
{
public:
    Arma() {}
};

class Amuleto : public Equipamiento
{
public:
    Amuleto() {}
};

class Pocion : public Equipamiento
{
public:
    Pocion() {}
};

class Planta : public Equipamiento
{
public:
    Planta() {}
};

class MonedaDorada : public Equipamiento
{
public:
    MonedaDorada() {}
};
