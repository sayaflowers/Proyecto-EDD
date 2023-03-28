#ifndef __ANALISIS__H__
#define __ANALISIS__H__

#include <iostream>
#include <string>

using namespace std;

class Analisis {
public:
  Analisis();
  static string obtenerTipoAnalisis();
  static string obtenerObjeto();
  static string obtenerComentario();
  static void fijarTipoAnalisis(const string ntipo_analisis);
  static void fijarObjeto(const string nObjeto);
  static void fijarComentario(const string nComentario);
  static void crearAnalisis();

protected:
  static string tipoAnalisis;
  static string objeto;
  static string comentario;
};

#endif // __ANALISIS__H__

#include "Analisis.hxx"