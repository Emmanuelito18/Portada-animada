#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <ctime>
#include "Portada.h"
#include "PortadaIzquierdaDerecha.h"
#include "PortadaDerechaIzquierda.h"
#include "PortadaCentroHorizontal.h"
#include "PortadaArribaAbajo.h"
#include "PortadaAbajoArriba.h"
#include "PortadaCentroVertical.h"

using namespace std;

int main(int argc, char** argv) {
	//Creación de objetos de clases
	Portada *portada[6];//se crea el objeto para la portada
	
	portada[0]=new PortadaIzquierdaDerecha();
	portada[1]=new PortadaDerechaIzquierda();
	portada[2]=new PortadaCentroHorizontal();
	portada[3]=new PortadaArribaAbajo();
	portada[4]=new PortadaAbajoArriba();
	portada[5]=new PortadaCentroVertical();
	
	srand(time(0));//semilla para generar números aleatorios
	int opcion=rand()%6;//genera un número aleatorio para decidir que portada se muestra
	
	portada[opcion]->mostrarPortada();
	// Liberar memoria
    for (int i = 0; i < 6; i++) {
        delete portada[i];
    }
	return 0;
}


