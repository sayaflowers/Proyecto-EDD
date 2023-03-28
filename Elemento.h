#ifndef __ELEMENTO__H__
#define __ELEMENTO__H__

#include <iostream>

using namespace std;

class Elemento {

public:
  Elemento();
  static void crearElemento();
  static string obtenerTipoComp();
  static float obtenerTamano();
  static string obtenerUnidadMedida();
  static float obtenerCOORDX();
  static float obtenerCOORDY();
  static void fijarTipoComp(const string ntipo_comp);
  static float fijarTamano(const float ntamano);
  static void fijarUnidadMedida(const float nunidad_medida);
  static float fijarCOORDX(const float ncoordx);
  static float fijarCOORDY(const float ncoordy);

protected:
  static string tipo_comp;
  static float tamano;
  static string unidad_medida;
  static float coordX;
  static float coordY;
};

#endif // __ELEMENTO__H__

#include "Elemento.hxx"