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
    virtual ~MatarALEgarde() {}
};

class RescatarALegarde : public Mision
{
public:
    RescatarALegarde() {}
    virtual ~RescatarALegarde() {}
};
