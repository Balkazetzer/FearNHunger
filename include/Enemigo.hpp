#include <iostream>
#include <cstdio>

class Enemigo
{
public:
    Enemigo() {}
    ~Enemigo() {}
};

class Guardia : public Enemigo
{
public:
    Guardia() {}
    ~Guardia() {}
};

class Maneba : public Enemigo
{
public:
    Maneba() {}
    ~Maneba() {}
};

class Ghoul : public Enemigo
{
public:
    Ghoul() {}
    ~Ghoul() {}
};
