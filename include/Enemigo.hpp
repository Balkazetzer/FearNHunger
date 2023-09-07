#include <iostream>
#include <cstdio>

class Enemigo
{
public:
    Enemigo() {}
    virtual ~Enemigo() {}
};

class Guardia : public Enemigo
{
public:
    Guardia() {}
};

class Maneba : public Enemigo
{
public:
    Maneba() {}
};

class Ghoul : public Enemigo
{
public:
    Ghoul() {}
};
