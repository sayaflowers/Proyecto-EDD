 //g++ -std=c++11 proyecto.cpp Nasa.cxx Movimiento.cxx Elemento.cxx comandos.cxx Analisis.cxx -o proyecto
//./proyecto

//Proyecto realizado por: Juan Lesmes, Daniela Florez y Maria Fernanda Cercado
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include<stdlib.h>
#include <fstream>
#include "Nasa.h"

using namespace std;

// Firma de las funciones
void menu();
vector<string> &IngresoTexto(vector<string> &vec);
void Help();
void Puente_help(vector <string> &vec);
void help_cargar_comandos();
void help_cargar_elementos();
void help_agregar_movimiento();
void help_agregar_analisis();
void help_agregar_elemento();
void help_guardar();
void help_simular_comandos();
void help_salir();
void help_ubicar_elementos();
void help_en_cuadrante();
void help_crear_mapa();
void help_ruta_mas_larga();

int main() {
  menu();
  return 0;
}

void menu(){
  
  vector <string> vec;
  //string comando;
  bool flag = false;
  while(!(flag == true)){
    vec.clear();
    cout << endl
         << endl
         << endl
         << endl
         << "__________________________CURIOSITY__________________________"
         << endl
         << endl;
    cout<<"El comando 'help' brindara informacion general de todos los comandos, si quiere conocer detalles sobre un comando en especifico escriba en minuscula la palabra 'help_comando' como se muestra en el siguiente ejemplo: help_cargar_comandos\n\n";
    cout<< "Por favor, ingrese un comando:" << endl;
    //IngresoTexto(vec);
    IngresoTexto(vec);
    if(vec[0] == "HELP"||vec[0] == "Help"||vec[0] =="help"){
      Help();
    }

    else if(vec[0] == "cargar_comandos"){
      system("clear");
      //Nasa::cargar_comandos();
    }

    else if(vec[0] == "agregar_movimiento"){
      //Comandos::agregarMovimiento()
    }

    else if(vec[0] == "agregar_analisis"){
      //Comandos::agregarAnalisis() 
    }

    else if(vec[0] == "guardar"){
      
    }

    else if(vec[0] == "simular_comandos"){
      //simular_comandos();
      //Segunda entrega
      
    }
      
    else if(vec[0] == "agregar_elemento"){
      system("clear");
      
    }

    else if(vec[0] == "salir"){
      nasa.salir();
    }

    else if(vec[0] == "ubicar_elementos"){
      system("clear");
      cout<<"Segunda entrega coming soon..."<<endl;
      //ubicar_elementos();
      //Segunda Entrega
    }

    else if(vec[0] == "cargar_elementos"){
      
    }

    else if (vec[0] == "en_cuadrante"){
      system("clear");
      cout<<"Segunda entrega coming soon..."<<endl;//en_cuadrante();
      //segunda entrega
    }

    else if(vec[0] == "crear_mapa"){
      //crear_mapa();
      //Segunda entrega
    }

    else if(vec[0] == "ruta_mas_larga"){
      //ruta_mas_larga();
      //Segunda entrega
    }
    else if(vec[0] == "help_cargar_comandos"){
      help_cargar_comandos();
    }
      
    else if(vec[0] == "help_cargar_elementos"){
      help_cargar_elementos();
    }

    else if(vec[0] == "help_agregar_movimiento"){
      help_agregar_movimiento();
    }

    else if(vec[0] == "help_agregar_analisis"){
      help_agregar_analisis();
    }

    else if(vec[0] == "help_agregar_elemento();"){
      //agregar_elemento();
    }

    else if(vec[0] == "help_guardar"){
      help_guardar();
    }

    else if(vec[0] == "help_simular_comandos"){
      help_simular_comandos();
    }

    else if(vec[0] == "help_salir"){
      help_salir();
    }

    else if(vec[0] == "help_ubicar_elementos"){
      help_ubicar_elementos();
    }

    else if(vec[0] == "help_en_cuadrante"){
      help_en_cuadrante();
    }

    else if(vec[0] == "help_crear_mapa"){
      help_crear_mapa();
    }

    else if(vec[0] == "help_ruta_mas_larga"){
      help_ruta_mas_larga();
    }

    else{
      cout<<"Comando no encontrado\n\n";
    }
  }
}

void Help(){

  system("clear");
  vector <string> vec;
  int opcion = 0;
  system("clear");
  cout << "____________PROGRAMA DE COMUNICACION CON CURIOSITY____________"
       << endl;
  cout<<"\ncargar_comandos\tnombre del archivo\ncargar_comandos archivoEjemplo\nPermite cargar en memoria un archivo con comandos\n\n";
  cout<<"________________________________________________________________________";
  
  cout<<"\n\ncargar_elementos\tnombre del archivo\ncargar_elementos archivoEjemplo\nPermite cargar en memoria un archivo con elementos\n\n";
  cout<<"__________________________________________________________________________";
  
  cout<<"\n\nagregar_movimiento\ttipo_mov magnitud unidad_med\nagregar_movimiento avanzar 60 grados\nPermite agregar un movimiento dependiendo del tipo y se digita la magnitud y las unidades\n\n";
  cout<<"___________________________________________________________________________";

  cout<<"\n\nagregar_analisis\ttipo_analisis objeto comentario\nagregar_analisis avanzar fotografia roca 'roca_cuadrante_32'\nPermite agregar un analisis de un objeto a una lista\n\n";
  cout<<"___________________________________________________________________________";

  cout<<"\n\nagregar_elemento\ttipo_comp tamaño unidad_med coordX coordY\nagregar_analisis avanzar fotografia roca 'roca_cuadrante_32'\nPermite agregar un elemento a la lista de puntos de interes del robot CURIOSITY\n\n";
  cout<<"___________________________________________________________________________";

  cout<<"\n\nguardar\ttipo_archivo nombre_archivo\nguardar txt archivo_ejemplo\nGuarda en los archivos la informacion correspondiente decada tipo de archivo\n\n";
  cout<<"___________________________________________________________________________";

  cout<<"\n\nsimular_comandos\tcoordX coordY\nsimular_comandos 60 -80\nPermite simular  el resultado de los comandos de movimiento que se envian al robot CURIOSITY\n\n";
  cout<<"___________________________________________________________________________";

  cout<<"\n\nsalir\nsalir\nTermina la ejecucion del programa\n\n";
  cout<<"___________________________________________________________________________";

  cout<<"\n\nubicar_elementos\nubicar_elemento\nUtiliza la informacion almacenada en memoria y la ubica en una estructura jerarquica de datos que permite realizar consultas geograficas de dicha informacion\n\n";
  cout<<"___________________________________________________________________________";

  cout<<"\n\nen_cuadrante\tcoordX1 coordX2 coordY1 coordY2\nen_cuadrante 78 23 -37 38\nPermite usar la estructura jerarquica previamente creada que retorna una lista de elementos o componentes dentro del espacio geografico determinado por x,y\n\n";
  cout<<"___________________________________________________________________________";

  cout<<"\n\ncrear_mapa\tcoeficiente_conectividad\ncrear_mapa 0.4\nPermite crear una estructura no lineal usando los puntos de interes, de acuerdo al coeficiente de conectividad\n\n";
  cout<<"___________________________________________________________________________";

  cout<<"\n\nruta_mas_alarga\nruta_mas_larga\nCalcula, con el mapa ya creado, los componentes mas alejados y retorna dichos componentes\n\n";
  cout<<"___________________________________________________________________________";

}

void help_cargar_comandos(){
  system("clear");
	cout<<"Cargar_comandos nombre_archivo"<<endl;
  cout<<"Carga los comandos de desplazamiento contenidos en el archivo."<<endl<<endl;	
  cout<<"Posibles salidas por pantalla:"<<endl<<endl;
	cout<<"(ARCHIVO VACIO)  /nombre_archivo/ no contiene elementos"<<endl;
  cout<<"(ARCHIVO ERRONEO)  /nombre_archivo/ no se encuentra o no puede leerse"<<endl;
	cout<<"(COMANDOS CARGADOS)  n comandos fueron cargados de manera correcta"<<endl;
  cout<<"presione cualquier tecla para salir"<<endl;
}

void help_cargar_elementos(){
  system("clear");
	cout<<"cargar_comandos nombre_archivo"<<endl;
  cout<<"Carga los comandos de desplazamiento contenidos en el archivo."<<endl<<endl;	
	cout<<"Posibles salidas por pantalla:"<<endl<<endl;
	cout<<"(ARCHIVO VACIO)  /nombre_archivo/ no contiene elementos"<<endl;
  cout<<"(ARCHIVO ERRONEO)  /nombre_archivo/ no se encuentra o no puede leerse"<<endl;
	cout<<"(COMANDOS CARGADOS)  n comandos fueron cargados de manera correcta"<<endl;
  cout<<"presione cualquier tecla para salir"<<endl;
}

void help_agregar_movimiento(){
  system("clear");
  cout<<endl;
  cout<<"Agregar_movimiento Avanzar o Girar ";
  cout<<"Agregar magnitud: "<<endl<<"1. Avanzar (Cantidad de unidades que espera avanzar)  2. Girar(Cantidad de grados que espera girar)"<<endl;
  cout<<"Agregar unidades: "<<endl<<"Unidades de acuerdo a convención con la que se mide la magnitud (centimetros, metros, grados, ...)"<<endl<<endl;
  cout<<"Posibles salidas por pantalla: "<<endl<<endl;
  cout<<"(FORMATO ERRONEO)  /tipo, magnitud, unidades/ no ingreso correctamente los datos "<<endl;
  cout<<"(RESULTADO EXITOSO)  /tipo, magnitud, unidades/ los datos se ingresaron correctamete "<<endl;
  cout<<"presione cualquier tecla para salir"<<endl;
}

void help_agregar_analisis(){
  system("clear");
  cout<<endl;
  cout<< "Agregar_analisis tipo_analisis objeto /'comentario'/"<<endl;
  cout<<"Agrega un analisis de un objeto a una lista, puede o no haber comentario"<<endl<<endl;
  cout<<"Posibles salidas por pantalla: "<<endl<<endl;
  cout<<"(FORMATO ERRONEO)  la informacion del analisis no corresponde a los datos esperados(tipo, objeto, comentario)."<<endl;
  cout<<"(RESULTADO EXITOSO)  El comando de analisis ha sido agregado exitosamente."<<endl;
  cout<<"presione cualquier tecla para salir"<<endl;
}
    
void help_agregar_elemento(){
  system("clear");
  cout<<endl;
  cout<<"Agregar_elemento tipo_comp tamaño unidad_med coordX coordY"<<endl;
  cout<<"Agrega un elemento a la lista de puntos de interés del robot"<<endl<<endl;
  cout<<"Posibles salidas por pantalla: "<<endl<<endl;
  cout<<"(FORMATO ERRONEO) La información del elemento no corresponde a los datos esperados (tipo,tamaño, unidad, x, y)."<<endl;
  cout<<"(RESULTADO EXITOSO)  El elemento ha sido agregado exitosamente."<<endl;
  cout<<"presione cualquier tecla para salir"<<endl;
}

void help_guardar(){
  system("clear");
  cout<<endl;
	cout<<"Guardar /elementos.txt/ /comandos.txt/ "<<endl;
  cout<<"Guarda en el archivo /elementos.txt/ La informacion de componentes o puntos de interes"<<endl<<endl;
  cout<<"Guarda en el archivo /comandos.txt/ La informacion de los comandos y analisis que debe ejecutar el robot "<<endl<<endl;
  cout<<"Posibles salidas por pantalla: "<<endl<<endl;
	cout<<"(NO HAY INORMACION)  No hay informacion cargada en memoria."<<endl;
  cout<<"(PROBLEMAS EN EL ARCHIVO)  Error guardando en nombre_archivo ."<<endl;
  cout<<"(ESCRITURA EXITOSA)  La informacion sido guardada en /nombre_archivo/ ."<<endl;	
	cout<<"presione cualquier tecla para salir"<<endl;
}

void help_simular_comandos(){
  system("clear");
  cout<<endl;
  cout<< "simular_comandos coordX coordY"<<endl;
  cout<<"Permite simular el resultado de los comandos de movimiento que se enviaran al robot desde la tierra."<<endl<<endl;
  cout<<"Posibles salidas por pantalla: "<<endl<<endl;
  cout<<"(NO HAY INFORMACION)  la informacion requerida no esta en memoria."<<endl;
  cout<<"(RESULTADO EXITOSO) La simulacion de los comandos, a partir de la posicion (coordX, coordY), deja el robot en la nueva posicion (nuevoX, nuevoY)."<<endl;
  cout<<"presione cualquier tecla para salir"<<endl;
}

void help_salir(){
  system("clear");
  cout<<endl;
	cout<<"'Salir' termina la ejecucion del programa"<<endl;  
  cout<<"presione cualquier tecla para salir"<<endl;
}

void help_ubicar_elementos(){
  system("clear");
  cout<<endl;
  cout<<"Ubicar elementos "<<endl;
  cout<<"Ubica los elementos /puntos de interes/ almacenados en memoria en una estructura de datos jerarquica  "<<endl<<endl;
  cout<<"Posibles salidas por pantalla: "<<endl<<endl;
  cout<<"(NO HAY INORMACION)  No hay informacion cargada en memoria."<<endl;
  cout<<"(PROBLEMAS CON ELEMENTOS)  Los siguientes elementos no pudieron procesarse adecuadamente /puntos de interes/. "<<endl;
  cout<<"(RESULTADO EXITOSO)  Los elementos fueron procesados exitosamente. "<<endl;	
	cout<<"presione cualquier tecla para salir"<<endl;
}

void help_en_cuadrante(){
  system("clear");
  cout<<endl;
  cout<< "en_cuadrante coordX1 coordX2 coordY1 coordY2"<<endl;
  cout<<"Indica una lista con los objetos encontrados en el cuadrante descrito a partir de las coordenadas obtenidas. Es necesario haber ejecutado el comando |ubicar_elementos| para poder realizar la busqueda por cuadrantes."<<endl<<endl;
  cout<<"Posibles salidas por pantalla: "<<endl<<endl;
  cout<<"(FORMATO ERRONEO)  la informacion requerida no esta en memoria."<<endl;
  cout<<"(NO HAY INFORMACION) Los elementos no han sido ubicados todavia (con el comando |ubicar_elementos|)."<<endl;
  cout<<"(RESULTADO EXITOSO)  Los elementos ubicados en el cuadrante son: ...";
  cout<<"presione cualquier tecla para salir"<<endl;
}

void help_crear_mapa(){
  system("clear");
  cout<<endl;
  cout<<" crear_mapa coeficiente_conectividad"<<endl;
  cout<<": El comando debe utilizar la información de puntos de interés para ubicarlos en una estructura no lineal y conectarlos entre sí teniendo en cuenta el coeficiente de conectividad"<<endl<<endl;
  cout<<"Posibles salidas por pantalla: "<<endl<<endl;
  cout<<"(NO HAY INFORMACION) La información requerida no está almacenada en memoria"<<endl;
  cout<<"(RESULTADO EXITOSO) El mapa se ha generado exitosamente. Cada elemento tiene n vecinos."<<endl;
  cout<<"presione cualquier tecla para salir"<<endl;
}

void help_ruta_mas_larga(){
  system("clear");
  cout<<endl;
  cout<<"Calcular la /Ruta mas larga/ "<<endl;
  cout<<"Calcula cual es la ruta mas larga a partir de los datos digitados /puntos de interes/ /movimientos/"<<endl<<endl;
  cout<<"Posibles salidas por pantalla:"<<endl<<endl;
  cout<<"(NO HAY INORMACION)  No hay informacion cargada en memoria."<<endl; 
  cout<<"(RESULTADO EXITOSO)  Los puntos de interés más alejados entre sí son / / y / /"<<endl<<" La ruta que los conecta tiene una longitud total de / /"<<endl<<"Pasa por los siguentes elementos / / "<<endl;	
  cout<<"presione cualquier tecla para salir"<<endl;
}

//--------------INGRESO DE TEXTO-----------------------
// Esta funcion recibe el comando escrito por el usuario
vector<string> &IngresoTexto(vector<string> &vec) {
  string Text;
  vec.clear();
  cout << "$ ";
  getline(cin, Text);
  stringstream I(Text);
  for (string line; getline(I, line, ' ');) {
    vec.push_back(line);
  }
  return vec;
}