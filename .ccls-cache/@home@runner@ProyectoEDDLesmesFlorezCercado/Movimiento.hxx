#include <iostream>
#include "Movimiento.h"

using namespace std;

//constructor
Movimiento::Movimiento(){
  tipo_mov = "";
  magnitud = "";
  unidad_medida = 0;
}

  static void crearMovimiento(){
    
  }

  static void Movimiento::fijarTipo_mov(const string nTipo_mov){
    this->tipo_mov = nTipo_mov;
  }

  static void Movimiento::fijarMagnitud(const string nMagnitud){
    this->magnitud = nMagnitud;
  }

  static void Movimiento::fijarUnidad_medida(const int nUnidad_medida){
    this->unidad_medida = nUnidad_medida;
  }

  static string Movimiento::obtenerTipo_mov(){
    return (tipo_mov);
  }

  static double Movimiento::obtenerMagnitud(){
    return (magnitud);
  }

  static string Movimiento::obtenerUnidad_medida(){
    return (unidad_medida);
  }