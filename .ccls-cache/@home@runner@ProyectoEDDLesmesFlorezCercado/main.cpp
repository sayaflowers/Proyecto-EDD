//g++ -std=c++11 main.cpp -o proyecto
//./proyecto


#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include<stdlib.h>




using namespace std;

// Firma de las funciones
void menu();
vector<string> &IngresoTexto(vector<string> &vec);
void Help();
void PuenteHelp(string opcion);
void Help_cargar_comandos();
void Help_cargar_elementos();
void Help_agregar_movimiento();
void Help_agregar_analisis();
void Help_agregar_elemento();
void Help_guardar();
void Help_simular_comandos();
void Help_salir();
void Help_ubicar_elementos();
void Help_en_cuadrante();
void Help_crear_mapa();
void Help_ruta_mas_larga();
////////////////FUNCIONES////////////////////
void cargar_comandos();
void cargar_elementos();
void agregar_movimiento();
void agregar_analisis();
void agregar_elemento();
void guardar();
void simular_comandos();
void salir();
void ubicar_elementos();
void en_cuadrante();
void crear_mapa();
void ruta_mas_larga();

int main() {
  menu();
  return 0;
}

void menu() {
  vector<string> vec;
  bool bandera = false;
  while (!bandera) {
    system("cls");
    vec.clear();
    cout << endl
         << endl
         << endl
         << endl
         << "__________________________CURIOSITY__________________________"
         << endl
         << endl;
    cout << "Utilice el comando 'HELP' para ver los comandos que puede utilizar"
         << endl
         << "Por favor, ingrese un comando:" << endl;
    IngresoTexto(vec);
    if (vec[0] == "HELP" || vec[0] == "help" || vec[0] == "Help") {
      if (vec.size() == 1) {
        Help();
      } else {
        if (vec.size() == 2) {
          PuenteHelp(vec[1]);
        } else {
          cout << "\nEl comando no se ejecuto de manera correcta, consulte el comando 'Help'"
               << endl
               << "Presione cualquier tecla" << endl;
          system("pause");
          //menu();
        }
      }
    }
    if(vec[0]=="cargar_comandos"){
      if(vec.size()==1){
        cargar_comandos();
      }
      else{
       cout<<"\nEl comando no se ejecuto de manera correcta, consulte el comando 'Help'"<<endl<<"Presione cualquier tecla"<<endl;
				system("pause");
				menu();
      }
    }
    if(vec[0]=="cargar_elementos"){
      if(vec.size()==1){
        cargar_elementos();
      }
     else{
      cout<<"\nEl comando no se ejecuto de manera correcta, consulte el comando 'Help'"<<endl<<"Presione cualquier tecla"<<endl;
				system("pause");
				menu();
     }
    }
    if(vec[0]=="agregar_movimiento"){
      if(vec.size()==1){
        agregar_movimiento();
      }
    else{
      cout<<"\nEl comando no se ejecuto de manera correcta, consulte el comando 'Help'"<<endl<<"Presione cualquier tecla"<<endl;
				system("pause");
				menu();
     }
    }
    if(vec[0]=="agregar_analisis"){
      if(vec.size()==1){
        agregar_analisis();
      }
      else{
        cout<<"\nEl comando no se ejecuto de manera correcta, consulte el comando 'Help'"<<endl<<"Presione cualquier tecla"<<endl;
				system("pause");
				menu();
      }
    }
    if(vec[0]=="agregar_elemento"){
      if(vec.size()==1){
        agregar_elemento();
      }
      else{
        cout<<"\nEl comando no se ejecuto de manera correcta, consulte el comando 'Help'"<<endl<<"Presione cualquier tecla"<<endl;
				system("pause");
				menu();
      }
    }
    if(vec[0]=="guardar"){
      if(vec.size()==1){
        guardar();
      }
      else{
        cout<<"\nEl comando no se ejecuto de manera correcta, consulte el comando 'Help'"<<endl<<"Presione cualquier tecla"<<endl;
				system("pause");
				menu();
      }
    }
    if(vec[0]=="simular_comandos"){
      if(vec.size()==1){
        simular_comandos();
      }
      else{
        cout<<"\nEl comando no se ejecuto de manera correcta, consulte el comando 'Help'"<<endl<<"Presione cualquier tecla"<<endl;
				system("pause");
				menu();
      }
    }
    if(vec[0]=="salir"){
      if(vec.size()==1){
        salir();
      }
      else{
        cout<<"\nEl comando no se ejecuto de manera correcta, consulte el comando 'Help'"<<endl<<"Presione cualquier tecla"<<endl;
				system("pause");
				menu();
      }
    }
    if(vec[0]=="ubicar_elementos"){
      if(vec.size()==1){
        ubicar_elementos();
      }
      else{
        cout<<"\nEl comando no se ejecuto de manera correcta, consulte el comando 'Help'"<<endl<<"Presione cualquier tecla"<<endl;
				system("pause");
				menu();
      }
    }
    if(vec[0]=="en_cuadrante"){
      if(vec.size()==1){
        en_cuadrante();
      }
      else{
        cout<<"\nEl comando no se ejecuto de manera correcta, consulte el comando 'Help'"<<endl<<"Presione cualquier tecla"<<endl;
				system("pause");
				menu();
      }
    }
    if(vec[0]=="crear_mapa"){
      if(vec.size()==1){
        crear_mapa();
      }
      else{
        cout<<"\nEl comando no se ejecuto de manera correcta, consulte el comando 'Help'"<<endl<<"Presione cualquier tecla"<<endl;
				system("pause");
				menu();
      }
    }
    if(vec[0]=="ruta_mas_larga"){
      if(vec.size()==1){
        ruta_mas_larga();
      }
      else{
        cout<<"\nEl comando no se ejecuto de manera correcta, consulte el comando 'Help'"<<endl<<"Presione cualquier tecla"<<endl;
				system("pause");
				menu();
      }
    }
  }
  exit(0);
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

//----------------------HELP--------------------
void Help() {
  system("cls");
  cout << "____________PROGRAMA DE COMUNICACION CON CURIOSITY____________"
       << endl
       << endl;
  cout<< " + Cargar_comandos /nombre del archivo/ -------> Permite cargar en memoria un archivo con comandos"<<endl<<endl;
  cout<< " + Cargar_elementos /nombre del archivo/ -------> Permite cargar en memoria un archivo con elementos"<<endl<<endl;
  cout<< " + Agregar_un_movimiento /Avanzar/ o /Girar/ -------> Permite agregar un movimiento dependiendo del tipo y se digita la magnitud y las unidades.";
  cout<< " + Agregar_analisis /tipo_analisis/ /objeto/ /'comentario'/ -------> Permite agregar un analisis de un objeto a una lista."<<endl<<endl;
  cout<< " + Agregar_elemento /Tipo/ /Tamaño/ /Unidad/ /x/ /y/ -------> Permite agregar un elemento a la lista de puntos de interes del robot CURIOSITY."<<endl<<endl;
  cout<< " + Guardar /elementos.txt/ /comandos.txt/ -------> Guarda en los archivos la informacion correspondiente decada tipo de archivo."<<endl<<endl;
  cout<< " + Simular_comandos /nuevoX/ /nuevoY/  -------> Permite simular  el resultado de los comandos de movimiento que se envian al robot CURIOSITY."<<endl<<endl;
  cout<< " + Salir -------> Termina la ejecucion del programa."<<endl<<endl;
  cout<< " + Ubicar_elementos -------> Utiliza la informacion almacenada en memoria y la ubica en una estructura jerarquica de datos que permite realizar consultas geograficas de dicha informacion."<<endl<<endl;
  cout<< " + En_cuadrante /x_min/ /x_max/ /y_min/ /y_max/ -------> Permite usar la estructura jerarquica previamente creada que retorna una lista de elementos o componentes dentro del espacio geografico determinado por x,y."<<endl<<endl;
  cout<< " + Crear_mapa /coeficiente de conectividad / -------> Permite crear una estructura no lineal usando los puntos de interes, de acuerdo al coeficiente de conectividad. "<<endl<<endl;
  cout<< " + Ruta_mas_larga -------> Calcula, con el mapa ya creado, los componentes mas alejados y retorna dichos componentes."<<endl<<endl;

}


/*----------------------PUENTE HELP--------------------
Funcion que redirige a otra funcion que indicara la forma 
correcta de ingresar la informacion y sus posibles 
opciones de salida
*/
void PuenteHelp(string opcion){
  if(opcion=="cargar_comandos"){
    Help_cargar_comandos();
  }
  else{
    if(opcion=="cargar_elementos"){
      Help_cargar_elementos();
    }
    else{
      if(opcion=="agregar_movimiento"){
        Help_agregar_movimiento();
      }
      else{
        if(opcion=="agregar_analisis"){
          Help_agregar_analisis();
        }
        else{
          if(opcion=="agregar elemento"){
            Help_agregar_elemento();
          }
          else{
            if(opcion=="guardar"){
              Help_guardar();
            }
            else{
              if(opcion=="salir"){
                Help_salir();
              }
              else{
                if(opcion=="ubicar_elementos"){
                  Help_ubicar_elementos();
                }
                else{
                  if(opcion=="en_cuadrante"){
                    Help_en_cuadrante();
                  }
                  else{
                    if(opcion=="crear_mapa"){
                      Help_crear_mapa();
                    }
                    else{
                      if(opcion=="ruta_mas_larga"){
                        Help_ruta_mas_larga();
                      }
                      else{
                        cout<<"no se encontro el comando, utilice el comando 'Help' para obtener informacion de los comandos existentes"<<endl<<"presione cualquien tecla para continuar"<<endl;
									system("pause");
									menu();
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}


/*----------------------HELP CARGAR COMANDOS--------------------
Funcion que indica de que forma se ingresan los comandos
y sus posibles salidas
1. juanfer
*/
void Help_cargar_comandos(){
	system("cls");
	cout<<endl;
	cout<<"Cargar_comandos /nombre_archivo/"<<endl;
  cout<<"Carga los comandos de desplazamiento contenidos en el archivo."<<endl<<endl;	
	cout<<"Posibles salidas por pantalla:"<<endl<<endl;
	cout<<"(ARCHIVO VACIO)  /nombre_archivo/ no contiene elementos"<<endl;
	cout<<"(ARCHIVO ERRONEO)  /nombre_archivo/ no se encuentra o no puede leerse"<<endl;
	cout<<"(COMANDOS CARGADOS)  n comandos fueron cargados de manera correcta"<<endl;
	cout<<"presione cualquier tecla para salir"<<endl;
	system("pause");
	return;
}

/*-------------------------HELP CARGAR ELEMENTOS----------------------------------
Función que indica la manera en que se cragaran los elementos
2.Mafe
*/
void Help_cargar_elementos(){
  system ("cls");
  cout<<endl;
  cout<<"Cargar_elementos /nombre_archivo/"<<endl;
  cout<<"Carga los datos de puntos de interés o elementos contenidos en el archivo"<<endl;
  cout<<"Posibles salidas por pantalla:"<<endl<<endl;
  cout<<"(ARCHIVO VACIO)  /nombre_archivo/ no contiene elementos"<<endl;
	cout<<"(ARCHIVO ERRONEO)  /nombre_archivo/ no se encuentra o no puede leerse"<<endl;
	cout<<"(COMANDOS CARGADOS)  n elementos fueron cargados de manera correcta"<<endl;
 cout<<"presione cualquier tecla para salir"<<endl;
	system("pause");
	return; cout<<"presione cualquier tecla para salir"<<endl;
	system("pause");
	return;
}


/*----------------------HELP CARGAR COMANDOS--------------------
Funcion que indica de como agregar un movimiento, la magnitud y las unidades del movimiento, 
y sus posibles salidas
3. saya
*/
void Help_agregar_movimiento(){
  system("cls");
  cout<<"Agregar_movimiento /Avanzar/ o /Girar/ ";
  cout<<"Agregar magnitud: "<<endl<<"1. Avanzar (Cantidad de unidades que espera avanzar)  2. Girar(Cantidad de grados que espera girar)"<<endl;
  cout<<"Agregar unidades: "<<endl<<"Unidades de acuerdo a convención con la que se mide la magnitud (centimetros, metros, grados, ...)"<<endl<<endl;
  cout<<"Posibles salidas por pantalla: "<<endl<<endl;
  cout<<"(FORMATO ERRONEO)  /tipo, magnitud, unidades/ no ingreso correctamente los datos "<<endl;
  cout<<"(RESULTADO EXITOSO)  /tipo, magnitud, unidades/ los datos se ingresaron correctamete "<<endl;
  cout<<"presione cualquier tecla para salir"<<endl;
  system("pause");
	return;
}

/*----------------------HELP AGREGAR ANALISIS--------------------
Funcion que agrega un analisis de un objeto a una lista. el comentario es opcional y permite agregar mas informacion sobre el elemento o el analisis hecho.
4. juanfer
*/
void Help_agregar_analisis(){
  system("CLS");
  cout<< "Agregar_analisis /tipo_analisis/ /objeto/ /'comentario'/"<<endl;
  cout<<"Agrega un analisis de un objeto a una lista, puede o no haber comentario"<<endl;
  cout<<"Posibles salidas por pantalla: "<<endl<<endl;
  cout<<"(FORMATO ERRONEO)  la informacion del analisis no corresponde a los datos esperados(tipo, objeto, comentario)."<<endl;
  cout<<"(RESULTADO EXITOSO)  El comando de analisis ha sido agregado exitosamente."<<endl;
  cout<<"presione cualquier tecla para salir"<<endl;
	system("pause");
	return;
}

/*----------------------HELP AGREGAR ELEMENTO--------------------------------
Funcion que permite almacenar un elemento en donde se guardaran datos como tipo de elemento,
tamaño del elemento, unidad de mediad del elemento, posicion 'x' y posicion 'y'
5. Mafe
*/
void Help_agregar_elemento(){
  system("CLS");
  cout<<"Agregar_elemento/tipo_comp/tamaño/unidad_med/coordX/coordY/"<<endl;
  cout<<"Agrega un elemento a la lista de puntos de interés del robot"<<endl;
  cout<<"Posibles salidas por pantalla: "<<endl<<endl;
  cout<<"(FORMATO ERRONEO) La información del elemento no corresponde a los datos esperados (tipo,tamaño, unidad, x, y)."<<endl;
  cout<<"(RESULTADO EXITOSO)  El elemento ha sido agregado exitosamente."<<endl;
  cout<<"presione cualquier tecla para salir"<<endl;
	system("pause");
	return;
}

/*----------------------HELP GUARDAR--------------------
Funcion que guarda la informacion en archivos.
Guarda en el archivo nombre_archivo la información solicitada de acuerdo al tipo de
archivo.
6. saya
*/
void Help_guardar(){
system("CLS");
	cout<<"Guardar /elementos.txt/ /comandos.txt/ "<<endl;
  cout<<"Guarda en el archivo /elementos.txt/ La informacion de componentes o puntos de interes"<<endl<<endl;
  cout<<"Guarda en el archivo /comandos.txt/ La informacion de los comandos y analisis que debe ejecutar el robot "<<endl;
	cout<<"Posibles salidas por pantalla: "<<endl<<endl;
	cout<<"(NO HAY INORMACION)  No hay informacion cargada en memoria."<<endl;
  cout<<"(PROBLEMAS EN EL ARCHIVO)  Error guardando en nombre_archivo ."<<endl;
	cout<<"(ESCRITURA EXITOSA)  La informacion sido guardada en /nombre_archivo/ ."<<endl;	
	cout<<"presione cualquier tecla para salir"<<endl;
	system("pause");
	return;
 
}

/*----------------------HELP SIMULAR COMANDOS--------------------
Funcion que permite simular los comandos de movimiento mostrando la posicion anterior y la nueva posicion en la que se encontaria el robot.
7. juanfer
*/
void Help_simular_comandos(){
  system("CLS");
  cout<< "simular_comandos /coordX/ /coordY/"<<endl;
  cout<<"Permite simular el resultado de los comandos de movimiento que se enviaran al robot desde la tierra."<<endl;
  cout<<"Posibles salidas por pantalla: "<<endl<<endl;
  cout<<"(NO HAY INFORMACION)  la informacion requerida no esta en memoria."<<endl;
  cout<<"(RESULTADO EXITOSO) La simulacion de los comandos, a partir de la posicion (coordX, coordY), deja el robot en la nueva posicion (nuevoX, nuevoY)."<<endl;
  cout<<"presione cualquier tecla para salir"<<endl;
	system("pause");
	return;
}

/*---------------------HELP SALIR--------------------------------
Funcion que termina la ejecución del programa
*/
void Help_salir(){
	system("CLS");
	cout<<"'Salir' termina la ejecucion del programa"<<endl;  
	cout<<"presione cualquier tecla para salir"<<endl;
	system("pause");
	return;
}

/*----------------------HELP UBICAR ELEMENTOS--------------------
Funcion que indica  como ubicar un elemento jerarquicamente,
y sus posibles salidas.
9. saya
*/
void Help_ubicar_elementos(){
  system("CLS");
  cout<<"Ubicar elementos "<<endl;
  cout<<"Ubica los elementos /puntos de interes/ almacenados en memoria en una estructura de datos jerarquica  "<<endl;
  cout<<"Posibles salidas por pantalla: "<<endl<<endl;
  cout<<"(NO HAY INORMACION)  No hay informacion cargada en memoria."<<endl;
  cout<<"(PROBLEMAS CON ELEMENTOS)  Los siguientes elementos no pudieron procesarse adecuadamente /puntos de interes/. "<<endl;
	cout<<"(RESULTADO EXITOSO)  Los elementos fueron procesados exitosamente. "<<endl;	
	cout<<"presione cualquier tecla para salir"<<endl;
	system("pause");
	return;
  
}

/*----------------------HELP EN CUADRANTE--------------------
Funcion que indica una lista con los objetos encontrados en un determinado cuadrante.
10. juanfer
*/
void Help_en_cuadrante(){
  system("CLS");
  cout<< "en_cuadrante /coordX1/ /coordX2/ /coordY1/ /coordY2/"<<endl;
  cout<<"Indica una lista con los objetos encontrados en el cuadrante descrito a partir de las coordenadas obtenidas. Es necesario haber ejecutado el comando |ubicar_elementos| para poder realizar la busqueda por cuadrantes."<<endl;
  cout<<"Posibles salidas por pantalla: "<<endl<<endl;
  cout<<"(FORMATO ERRONEO)  la informacion requerida no esta en memoria."<<endl;
  cout<<"(NO HAY INFORMACION) Los elementos no han sido ubicados todavia (con el comando |ubicar_elementos|)."<<endl;
  cout<<"(RESULTADO EXITOSO)  Los elementos ubicados en el cuadrante son: ...";
  cout<<"presione cualquier tecla para salir"<<endl;
	system("pause");
	return;
}

/*---------------------HELP CARGAR MAPA-------------------------------
Funcion que por medio de puntos previamente almacenados los conecta teniendo en cuenta el coficiente de concectividad
*/
void Help_crear_mapa(){
  system("CLS");
  cout<<" crear_mapa/coeficiente_conectividad/"<<endl;
  cout<<": El comando debe utilizar la información de puntos de interés para ubicarlos en una estructura no lineal y conectarlos entre sí teniendo en cuenta el coeficiente de conectividad"<<endl;
  cout<<"Posibles salidas por pantalla: "<<endl<<endl;
  cout<<"(NO HAY INFORMACION) La información requerida no está almacenada en memoria"<<endl;
  cout<<"(RESULTADO EXITOSO) El mapa se ha generado exitosamente. Cada elemento tiene n vecinos."<<endl;
  cout<<"presione cualquier tecla para salir"<<endl;
	system("pause");
	return;
}


/*----------------------HELP RUTA MAS LARGA--------------------
Funcion que indica como se calcula la ruta mas larga,
y sus posibles salidas.
12. saya
*/
void Help_ruta_mas_larga(){
  system("CLS");
 cout<<"Calcular la /Ruta mas larga/ "<<endl;
 cout<<"Calcula cual es la ruta mas larga a partir de los datos digitados /puntos de interes/ /movimientos/"<<endl;
 cout<<"Posibles salidas por pantalla"<<endl<<endl;
 cout<<"(NO HAY INORMACION)  No hay informacion cargada en memoria."<<endl; 
 cout<<"(RESULTADO EXITOSO)  Los puntos de interés más alejados entre sí son / / y / /"<<endl<<" La ruta que los conecta tiene una longitud total de / /"<<endl<<"Pasa por los siguentes elementos / / "<<endl;	
 cout<<"presione cualquier tecla para salir"<<endl;
 system("pause");
 return;
  
}
///////FUNCIONES///////

void cargar_comandos(){ //LISTO
	system("CLS");
	cout<<"coming soon";
	}
void agregar_analisis(){
  system("CLS");
	cout<<"coming soon";
}
void simular_comandos(){
  system("CLS");
	cout<<"coming soon";
}
void ubicar_elementos(){
  system("CLS");
	cout<<"coming soon";
}
void ruta_mas_larga(){
  system("CLS");
	cout<<"coming soon";
}
void guardar(){
  system("CLS");
	cout<<"coming soon";
}
void agregar_movimiento(){
  system("CLS");
	cout<<"coming soon";
}
void en_cuadrante(){
  system("CLS");
	cout<<"coming soon";
}
void crear_mapa(){
  system("CLS");
	cout<<"coming soon";
}
void cargar_elementos(){
  system("CLS");
	cout<<"coming soon";
}
void agregar_elemento(){
  system("CLS");
	cout<<"coming soon";
}
void salir(){
  system("CLS");
	cout<<"coming soon";
}

