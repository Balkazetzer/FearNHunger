#include <iostream>
#include <cstdio>

class Mision
{
public:
    Mision() {}
    virtual ~Mision() {}
};

class MatarALEgarde : public Mision
{
public:
    MatarALEgarde() {}
};

class RescatarALegarde : public Mision
{
public:
    RescatarALegarde() {}
};
