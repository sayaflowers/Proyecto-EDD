#ifndef __COMANDOS__H__
#define __COMANDOS__H__

#include <iostream>
#include "Movimiento.h"
#include "Analisis.h"
#include <queue>


using namespace std;

class comandos{

public:
    comandos();
    // a la vola
    void agregar_analisis (const string& tipo_analisis,const string& objeto,const string& comentario);
    void agregar_movimiento (const string& tipo_mov, const double& magnitud,const string& unidad_med);
    string obtenerTipo_mov();
    double obtenerMagnitud();
    string obtenerUnidad_med();
    string obtenerTipo_analisis();
    string obtenerObjeto();
    string obtenerComentario();

protected:
    queue<Movimiento> colaMovimientos;
    queue<Analisis> colaAnalisis;
};

#endif // __ANALISIS__H__