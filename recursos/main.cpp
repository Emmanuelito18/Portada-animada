#include <iostream>
#include "Portada.h"//Para mostrar la animación de la portada

using namespace std;

int main(int argc, char** argv) {
	//Creación de objetos de clases
	Portada portada;//se crea el objeto para la portada
	
	portada.setVariables("Programación","grupo","Osornio Soto Roberto");//se establecen las variables para la portada
	portada.mostrarPortada();
	return 0;
}
