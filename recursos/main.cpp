#include <iostream>
#include "Portada.h"//Para mostrar la animaci�n de la portada

using namespace std;

int main(int argc, char** argv) {
	//Creaci�n de objetos de clases
	Portada portada;//se crea el objeto para la portada
	
	portada.setVariables("Programaci�n","grupo","Osornio Soto Roberto");//se establecen las variables para la portada
	portada.mostrarPortada();
	return 0;
}
