#include <iostream>
#include <cstdio>

class Estadistica
{
public:
  Estadistica() {}
  ~Estadistica() {}
};

class Salud : public Estadistica
{
public:
  Salud() {}
  ~Salud() {}
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
  ~Hambre() {}
};

class Fobia : public Estadistica
{
public:
  Fobia() {}
  ~Fobia() {}
};
