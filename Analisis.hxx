#include <iostream>
#include "Analisis.h"

using namespace std;

//constructor
Analisis::Analisis(){
  tipoAnalisis = "";
  objeto = "";
  comentario = "";
}

static string Analisis::obtenerTipoAnalisis(){
  return (tipoAnalisis);
}

static string Analisis::obtenerObjeto(){
  return (objeto);
}

static string Analisis::obtenerComentario(){
  return (comentario);
}

static void Analisis::fijarTipoAnalisis(const string ntipo_analisis){
  this->tipoAnalisis = ntipo_analisis;
}

static void Analisis::fijarObjeto(const string nObjeto {
  this->objeto = nObjeto;
}

static void Analisis::fijarComentario(const string nComentario){
  this->comentario = nComentario;
}