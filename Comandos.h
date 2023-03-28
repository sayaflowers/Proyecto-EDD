#ifndef __COMANDOS__H__
#define __COMANDOS__H__

#include "Analisis.h"
#include "Movimiento.h"
#include <iostream>
#include <queue>

using namespace std;

class Comandos {

public:
  Comandos();

protected:
static queue<Movimiento> ColaMovimientos{};
};

#endif // __COMANDOS__H__