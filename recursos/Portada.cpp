#include "Portada.h"
#include <iostream>
#include <windows.h> //para las funciones sleep ,coord y la reproducción de sonidos

using namespace std;

//Constructor
Portada::Portada(){
	
}

//Destructor
Portada::~Portada(){
	
}

void Portada::irA(int x,int y){//El CMD tiene 29 filas y 119 columnas
	COORD coord;
	coord.X=x;
	coord.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);//modifica la ubicacion del cursor de la consola
}

void Portada::ocultarCursor(){
	CONSOLE_CURSOR_INFO cci={100,FALSE};
	
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE),&cci);//oculta el cursor de la consola
}

void Portada::mostrarCursor(){
	CONSOLE_CURSOR_INFO cci={100,TRUE};
	
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE),&cci);//oculta el cursor de la consola
}

void Portada::portada(){
	ocultarCursor();//llama a la función ocultaCursor
	irA(45,2);
	cout<<"Este programa ha sido creado por:"<<endl;
	animacion();//llama a la función para comenzar la animación
	PlaySound("recursos\\moneda.wav",NULL,SND_FILENAME);
	/*Reproduce un sonido en formato wav si no encuentra el sonido reproduce
	el sonido de error del sistema*/
	Sleep(50);
	irA(35,15);
	cout<<"Recuerda que si puedes imaginarlo, puedes programarlo"<<endl;
	irA(0,17);//cambia la posición del cursor para mostrar texto final de la portada
}

void Portada::animacion(){
	
}


void Portada::mostrarPortada(){
	system("color 1f");//cambia el color de la consola a fondo azul y texto blanco
	portada();//llama a la función portada
	system("pause");
	system("cls");
	system("color 0f");//pone el color de la consola al establecido por defecto configurado
	mostrarCursor();
}
