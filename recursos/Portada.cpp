#include "Portada.h"
#include <iostream>
#include <locale.>
#include <string>
#include <windows.h> //para las funciones sleep ,coord y la reproducción de sonidos


using namespace std;

//Constructor
Portada::Portada(){

}

//Destructor
Portada::~Portada(){

}

void Portada::mostrarPortada(){
	system("color 1f");//cambia el color de la consola a fondo azul y texto blanco
	portada();//llama a la función portada
	system("pause");
	system("cls");
	system("color 0f");//pone el color de la consola al establecido por defecto configurado
	mostrarCursor();
	//Aquí se pondrá el resto del programa
}

//establecemos valores a los atributos 
void Portada::setVariables(string _materia,string _grupo,string _profesor){
	materia=_materia;
	grupo=_grupo;
	profesor=_profesor;
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
	animacion();//llama a la función para comenzar la animación
	PlaySound("recursos\\moneda.wav",NULL,SND_FILENAME);
	/*Reproduce un sonido en formato wav
	si no encuentra el sonido reproduce el sonido de error del sistema*/
	Sleep(50);
	setlocale(LC_ALL,"spanish");//se cambia la lozalizacion de la consola a español
	irA(50,15);//cambia la posición del cursor para mostrar texto final de la portada
	cout<<"INSTITUTO POLITÉCNICO NACIONAL";
	irA(35,16);
	cout<<"Escuela Superior de Ingieniería Mecánica y Electrónica";
	irA(55,17);
	cout<<"Unidad Culhuacán";
	irA(45,18);
	cout<<"Nombre: Mejía Castañeda Bryan Emmanuel";
	irA(53,19);
	cout<<"Materia: "<<materia;
	irA(55,20);
	cout<<"Grupo: "<<grupo;
	irA(40,21);
	cout<<"Profesor: "<<profesor;
	irA(35,23);
	cout<<"Recuerda que si puedes imaginarlo, puedes programarlo"<<endl;
	irA(40,25);//regresa el cursor a suposición original
	setlocale(LC_ALL,"C");//Se cambia la localización de la consola a la original
}

void Portada::animacion(){
	
}

