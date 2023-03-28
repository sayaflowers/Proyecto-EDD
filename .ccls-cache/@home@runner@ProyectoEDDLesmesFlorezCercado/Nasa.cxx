#include "Nasa.h"
#include <cstdlib>
#include <iostream>
#include <list>
#include <fstream>

using namespace std;

list<comandos> lComandos;
list<Elemento> lElementos;
queue<Analisis> colaAnalisis;
queue<Movimiento> colaMovimientos;
 

void Nasa:: cargar_comandos(string nombre_archivo){

  string line;
  ifstream input;
  input.open(nombre_archivo, ios::in);
  if(input.fail()){
    cout << "Error al intentar abrir el archivo" << endl;
  }
  else{
    while(getline(inputFile,linea)){
    //agrega la linea a la lista
    lComandos.push(linea);
  }
  inputFile.close();
    }
  while(!lComandos.empty()){
    cout << lComandos.front() << endl;
    lComandos.pop();
  }

  for(list<string>::iterator it = lComandos.begin();it != lComandos.end();it++){
    if(it->tipo_mov == girar || it->tipo_mov == avanzar){
      colaMovimientos.push(*it);
    }
    else{
      for(list<string>::iterator it = lComandos.being();it != lComandos.edn();it++){
        colaAnalisis.push(*it);
      }
    }
  }
  
  
  /*ifstream inputFile("nombre_archivo");
  if(inputFile.fail()){
    
  }else{
  string linea;
  while(getline(inputFile,linea)){
    //agrega la linea a la cola
    colaMovimientos.push(linea);
  }
  inputFile.close();
    }
  while(!colaMovimientos.empty()){
    cout << colaMovimientos.front() << endl;
    colaMovimientos.pop();
  }*/
}

void Nasa:: guardar(string &tipo_archivo, string &nombre_archivo){

  
    if (tipo_archivo== "comando"|| tipo_archivo== "Comando"){
      
      ofstream archivo(nombre_archivo);
      
      if(archivo.is_open()){
      
        for (list<string>::iterator it = lComandos.begin(); it != lComandos.end(); ++it) {
            archivo << *it;
        }

        archivo.close();
        cout << "Archivo guardado exitosamente como " << nombre_archivo << endl;
        
        
      } else
            cout<< "Error guardando en " << nombre_archivo << "." << endl;"

      
    }else if (tipo_archivo=="elemento"|| tipo_archivo== "Elemento" ){
      
        ofstream archivo(nombre_archivo);
      
        if(archivo.is_open()){
        
        for (list<string>::iterator it = lElementos.begin(); it != lElementos.end(); ++it) {
            archivo << *it;
        }
          
        archivo.close();
        cout << "Archivo guardado exitosamente como " << nombre_archivo << endl;
        
      }
          
      else
          cout<< "(Problemas en el archivo)Error guardando en " << nombre_archivo << "." << endl;
  
}
  else cout<< "(No hay infromacion) La informacion requerida no esta almacenada en memoria"
}

void Nasa:: salir(){
  exit(0);  
}

void Nasa:: simular_comandos(float coordX, float coordY){

  
}
