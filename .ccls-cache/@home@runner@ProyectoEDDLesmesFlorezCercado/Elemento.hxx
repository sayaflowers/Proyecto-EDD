#include <iostream>
#include "Elemento.h"

using namespace std;

Elemento::Elemento(){
  
 tipo_comp= "";
 tamano= "";
 unidad_medida= "";
 coordX= "";
 coordY= "";
  
}

static string Elemento::obtenerTipoComp(){
  return (tipo_comp);
}

static float Elemento::obtenerTamano(){
  return (tamano);
}

static string Elemento::obtenerUnidadMedida(){
  return (unidad_medida);
}

static float Elemento::obtenerCOORDX(){
  return (coordY);
}

static float Elemento::obtenerCOORDY(){
  return (coordY);
}

static string Elemento::fijarTipoComp(const string ntipo_comp){
  this->tipo_comp = ntipo_comp;
}

static float Elemento::fijarTamano(const float ntamano){
  this->tamano = ntamano;
}

static string Elemento::fijarUnidadMedida(const string nunidad_medida){
  this->unidad_medida = nunidad_medida;
}

static float Elemento::fijarCOORDY(const float ncoordx){
  this->coordX = ncoordx;
}

static float Elemento::fijarCOORDX(const float ncoordy){
  this->coordY = ncoordy;
}




