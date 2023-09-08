#include <iostream>
#include <cstdio>

class Personaje
{
public:
  Personaje() {}
  ~Personaje() {}
};

class PersonajeJugable : public Personaje
{
public:
  PersonajeJugable() {}
  ~PersonajeJugable() {}
};

class PersonajeNoJugable : public Personaje
{
public:
  PersonajeNoJugable() {}
  ~PersonajeNoJugable() {}
};

class Cahara : public PersonajeJugable
{
public:
  Cahara() {}
  ~Cahara() {}
};

class DArce : public PersonajeJugable
{
public:
  DArce() {}
  ~DArce() {}
};

class Ragnvaldr : public PersonajeJugable
{
public:
  Ragnvaldr() {}
  ~Ragnvaldr() {}
};

class Enki : public PersonajeJugable
{
public:
  Enki() {}
  ~Enki() {}
};

class Girl : public PersonajeNoJugable
{
public:
  Girl() {}
  ~Girl() {}
};

class LEgarde : public PersonajeNoJugable
{
public:
  LEgarde() {}
  ~LEgarde() {}
};

class Nashrah : public PersonajeNoJugable
{
public:
  Nashrah() {}
  ~Nashrah() {}
};

class Moonless : public PersonajeNoJugable
{
public:
  Moonless() {}
  ~Moonless() {}
};
