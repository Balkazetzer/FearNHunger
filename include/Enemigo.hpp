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
    virtual ~Guardia() {}
};

class Maneba : public Enemigo
{
public:
    Maneba() {}
    virtual ~Maneba() {}
};

class Ghoul : public Enemigo
{
public:
    Ghoul() {}
    virtual ~Ghoul() {}
};
