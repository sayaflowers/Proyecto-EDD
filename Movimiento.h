#ifndef __MOVIMIENTO__H__
#define __MOVIMIENTO__H__

#include <string>

using namespace std;

class Movimiento {
  public:

  Movimiento();
  static void crearMovimiento();
  static void fijarTipo_mov(const string nTipo_mov);
  static void fijarMagnitud(const string nMagnitud);
  static void fijarUnidad_medida(const int nUnidad_medida);
  static string obtenerTipo_mov();
  static double obtenerMagnitud();
  static string obtenerUnidad_medida();

  protected:

  static string tipo_mov;
  static double magnitud;
  static string unidad_medida;

};

#endif // __MOVIMIENTO__H__

#include "Movimiento.hxx"