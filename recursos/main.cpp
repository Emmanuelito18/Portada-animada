#include <iostream>
#include <windows.h> //para las funciones sleep y coord

using namespace std;

void irA(int,int );
void ocultarCursor();
void mostrarCursor();
void portada();
void animacion();

int main(int argc, char** argv) {
	system("color 1f");//cambia el color de la consola a fondo azul y texto blanco
	portada();//llama a la función portada
	system("color");//pone el color de la consola al establecido por defecto configurado
	system("pause");
	mostrarCursor();
	return 0;
}

void irA(int x,int y){
	COORD coord;
	coord.X=x;
	coord.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);//modifica la ubicacion del cursor de la consola
}

void ocultarCursor(){
	CONSOLE_CURSOR_INFO cci={100,FALSE};
	
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE),&cci);//oculta el cursor de la consola
}

void mostrarCursor(){
	CONSOLE_CURSOR_INFO cci={100,TRUE};
	
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE),&cci);//oculta el cursor de la consola
}

void portada(){
	ocultarCursor();//llama a la función ocultaCursor
	animacion();//llama a la función para comenzar la animación
	irA(0,15);//cambia la posición del cursor para mostrar texto final de la portada
	
}

void animacion(){//cada parte de la animacion se hace imprimiendo partes de las letras mediante la función irA
	irA(25,2);
	cout<<"Este programa ha sido creado por:"<<endl;
	//crea la letra E
	//linea 1
	irA(9,4);
	cout<<(char)219;
	irA(9,5);
	cout<<(char)219;
	irA(9,6);
	cout<<(char)219;
	irA(9,7);
	cout<<(char)219;
	irA(9,8);
	cout<<(char)219;
	irA(9,9);
	cout<<(char)219;
	irA(9,10);
	cout<<(char)219;
	irA(9,11);
	cout<<(char)219;
	irA(9,12);
	cout<<(char)219;
	Sleep(50);
	//linea 2
	irA(10,4);
	cout<<(char)219;
	irA(10,5);
	cout<<(char)178;
	irA(10,6);
	cout<<(char)178;
	irA(10,7);
	cout<<(char)178;
	irA(10,8);
	cout<<(char)219;
	irA(10,9);
	cout<<(char)178;
	irA(10,10);
	cout<<(char)178;
	irA(10,11);
	cout<<(char)178;
	irA(10,12);
	cout<<(char)219;
	Sleep(50);
	//linea 3
	irA(11,4);
	cout<<(char)219;
	irA(11,5);
	cout<<(char)178;
	irA(11,8);
	cout<<(char)219;
	irA(11,9);
	cout<<(char)178;
	irA(11,12);
	cout<<(char)219;
	Sleep(50);
	//linea 4
	irA(12,4);
	cout<<(char)219;
	irA(12,5);
	cout<<(char)178;
	irA(12,8);
	cout<<(char)178;
	irA(12,9);
	cout<<(char)178;
	irA(12,12);
	cout<<(char)219;
	Sleep(50);
	//linea 5
	irA(13,4);
	cout<<(char)178;
	irA(13,5);
	cout<<(char)178;
	irA(13,12);
	cout<<(char)178;
	Sleep(50);
	//crea la letra M
	//linea 1
	irA(14,4);
	cout<<(char)219;
	irA(14,5);
	cout<<(char)219;
	irA(14,6);
	cout<<(char)219;
	irA(14,7);
	cout<<(char)219;
	irA(14,8);
	cout<<(char)219;
	irA(14,9);
	cout<<(char)219;
	irA(14,10);
	cout<<(char)219;
	irA(14,11);
	cout<<(char)219;
	irA(14,12);
	cout<<(char)219;
	Sleep(50);
	//linea 2
	irA(15,4);
	cout<<(char)178;
	irA(15,5);
	cout<<(char)219;
	irA(15,6);
	cout<<(char)219;
	irA(15,7);
	cout<<(char)178;
	irA(15,8);
	cout<<(char)178;
	irA(15,9);
	cout<<(char)178;
	irA(15,10);
	cout<<(char)178;
	irA(15,11);
	cout<<(char)178;
	irA(15,12);
	cout<<(char)178;
	Sleep(50);
	//linea 3
	irA(16,5);
	cout<<(char)178;
	irA(16,6);
	cout<<(char)178;
	irA(16,7);
	cout<<(char)219;
	irA(16,8);
	cout<<(char)219;
	Sleep(50);
	//linea 4
	irA(17,5);
	cout<<(char)219;
	irA(17,6);
	cout<<(char)219;
	irA(17,7);
	cout<<(char)178;
	irA(17,8);
	cout<<(char)178;
	Sleep(50);
	//linea 5
	irA(18,4);
	cout<<(char)219;
	irA(18,5);
	cout<<(char)219;
	irA(18,6);
	cout<<(char)219;
	irA(18,7);
	cout<<(char)219;
	irA(18,8);
	cout<<(char)219;
	irA(18,9);
	cout<<(char)219;
	irA(18,10);
	cout<<(char)219;
	irA(18,11);
	cout<<(char)219;
	irA(18,12);
	cout<<(char)219;
	Sleep(50);
	//linea 6
	irA(19,4);
	cout<<(char)178;
	irA(19,5);
	cout<<(char)178;
	irA(19,6);
	cout<<(char)178;
	irA(19,7);
	cout<<(char)178;
	irA(19,8);
	cout<<(char)178;
	irA(19,9);
	cout<<(char)178;
	irA(19,10);
	cout<<(char)178;
	irA(19,11);
	cout<<(char)178;
	irA(19,12);
	cout<<(char)178;
	Sleep(50);
	//crea la letra M
	//linea 1
	irA(20,4);
	cout<<(char)219;
	irA(20,5);
	cout<<(char)219;
	irA(20,6);
	cout<<(char)219;
	irA(20,7);
	cout<<(char)219;
	irA(20,8);
	cout<<(char)219;
	irA(20,9);
	cout<<(char)219;
	irA(20,10);
	cout<<(char)219;
	irA(20,11);
	cout<<(char)219;
	irA(20,12);
	cout<<(char)219;
	Sleep(50);
	//linea 2
	irA(21,4);
	cout<<(char)178;
	irA(21,5);
	cout<<(char)219;
	irA(21,6);
	cout<<(char)219;
	irA(21,7);
	cout<<(char)178;
	irA(21,8);
	cout<<(char)178;
	irA(21,9);
	cout<<(char)178;
	irA(21,10);
	cout<<(char)178;
	irA(21,11);
	cout<<(char)178;
	irA(21,12);
	cout<<(char)178;
	Sleep(50);
	//linea 3
	irA(22,5);
	cout<<(char)178;
	irA(22,6);
	cout<<(char)178;
	irA(22,7);
	cout<<(char)219;
	irA(22,8);
	cout<<(char)219;
	Sleep(50);
	//linea 4
	irA(23,5);
	cout<<(char)219;
	irA(23,6);
	cout<<(char)219;
	irA(23,7);
	cout<<(char)178;
	irA(23,8);
	cout<<(char)178;
	Sleep(50);
	//linea 5
	irA(24,4);
	cout<<(char)219;
	irA(24,5);
	cout<<(char)219;
	irA(24,6);
	cout<<(char)219;
	irA(24,7);
	cout<<(char)219;
	irA(24,8);
	cout<<(char)219;
	irA(24,9);
	cout<<(char)219;
	irA(24,10);
	cout<<(char)219;
	irA(24,11);
	cout<<(char)219;
	irA(24,12);
	cout<<(char)219;
	Sleep(50);
	//linea 6
	irA(25,4);
	cout<<(char)178;
	irA(25,5);
	cout<<(char)178;
	irA(25,6);
	cout<<(char)178;
	irA(25,7);
	cout<<(char)178;
	irA(25,8);
	cout<<(char)178;
	irA(25,9);
	cout<<(char)178;
	irA(25,10);
	cout<<(char)178;
	irA(25,11);
	cout<<(char)178;
	irA(25,12);
	cout<<(char)178;
	Sleep(50);
	//crea la letra A
	//linea 1
	irA(26,6);
	cout<<(char)219;
	irA(26,7);
	cout<<(char)219;
	irA(26,8);
	cout<<(char)219;
	irA(26,9);
	cout<<(char)219;
	irA(26,10);
	cout<<(char)219;
	irA(26,11);
	cout<<(char)219;
	irA(26,12);
	cout<<(char)219;
	Sleep(50);
	//linea 2
	irA(27,4);
	cout<<(char)219;
	irA(27,5);
	cout<<(char)219;
	irA(27,6);
	cout<<(char)178;
	irA(27,7);
	cout<<(char)178;
	irA(27,8);
	cout<<(char)219;
	irA(27,9);
	cout<<(char)178;
	irA(27,10);
	cout<<(char)178;
	irA(27,11);
	cout<<(char)178;
	irA(27,12);
	cout<<(char)178;
	Sleep(50);
	//linea 3
	irA(28,4);
	cout<<(char)219;
	irA(28,5);
	cout<<(char)219;
	irA(28,8);
	cout<<(char)219;
	irA(28,9);
	cout<<(char)178;
	Sleep(50);
	//linea 4
	irA(29,4);
	cout<<(char)178;
	irA(29,5);
	cout<<(char)178;
	irA(29,6);
	cout<<(char)219;
	irA(29,7);
	cout<<(char)219;
	irA(29,8);
	cout<<(char)219;
	irA(29,9);
	cout<<(char)219;
	irA(29,10);
	cout<<(char)219;
	irA(29,11);
	cout<<(char)219;
	irA(29,12);
	cout<<(char)219;
	Sleep(50);
	//linea 5
	irA(30,6);
	cout<<(char)178;
	irA(30,7);
	cout<<(char)178;
	irA(30,8);
	cout<<(char)178;
	irA(30,9);
	cout<<(char)178;
	irA(30,10);
	cout<<(char)178;
	irA(30,11);
	cout<<(char)178;
	irA(30,12);
	cout<<(char)178;
	Sleep(50);
	//crea la letra N
	//linea 1
	irA(31,4);
	cout<<(char)219;
	irA(31,5);
	cout<<(char)219;
	irA(31,6);
	cout<<(char)219;
	irA(31,7);
	cout<<(char)219;
	irA(31,8);
	cout<<(char)219;
	irA(31,9);
	cout<<(char)219;
	irA(31,10);
	cout<<(char)219;
	irA(31,11);
	cout<<(char)219;
	irA(31,12);
	cout<<(char)219;
	Sleep(50);
	//linea 2
	irA(32,4);
	cout<<(char)178;
	irA(32,5);
	cout<<(char)178;
	irA(32,6);
	cout<<(char)178;
	irA(32,7);
	cout<<(char)219;
	irA(32,8);
	cout<<(char)219;
	irA(32,9);
	cout<<(char)178;
	irA(32,10);
	cout<<(char)178;
	irA(32,11);
	cout<<(char)178;
	irA(32,12);
	cout<<(char)178;
	Sleep(50);
	//linea 3
	irA(33,7);
	cout<<(char)178;
	irA(33,8);
	cout<<(char)178;
	irA(33,9);
	cout<<(char)219;
	irA(33,10);
	cout<<(char)219;
	Sleep(50);
	//linea 4
	irA(34,4);
	cout<<(char)219;
	irA(34,5);
	cout<<(char)219;
	irA(34,6);
	cout<<(char)219;
	irA(34,7);
	cout<<(char)219;
	irA(34,8);
	cout<<(char)219;
	irA(34,9);
	cout<<(char)219;
	irA(34,10);
	cout<<(char)219;
	irA(34,11);
	cout<<(char)219;
	irA(34,12);
	cout<<(char)219;
	//linea 5
	irA(35,4);
	cout<<(char)178;
	irA(35,5);
	cout<<(char)178;
	irA(35,6);
	cout<<(char)178;
	irA(35,7);
	cout<<(char)178;
	irA(35,8);
	cout<<(char)178;
	irA(35,9);
	cout<<(char)178;
	irA(35,10);
	cout<<(char)178;
	irA(35,11);
	cout<<(char)178;
	irA(35,12);
	cout<<(char)178;
	Sleep(50);
	//crea la letra U
	//linea 1
	irA(36,4);
	cout<<(char)219;
	irA(36,5);
	cout<<(char)219;
	irA(36,6);
	cout<<(char)219;
	irA(36,7);
	cout<<(char)219;
	irA(36,8);
	cout<<(char)219;
	irA(36,9);
	cout<<(char)219;
	irA(36,10);
	cout<<(char)219;
	irA(36,11);
	cout<<(char)178;
	Sleep(50);
	//linea 2
	irA(37,4);
	cout<<(char)178;
	irA(37,5);
	cout<<(char)178;
	irA(37,6);
	cout<<(char)178;
	irA(37,7);
	cout<<(char)178;
	irA(37,8);
	cout<<(char)178;
	irA(37,9);
	cout<<(char)178;
	irA(37,10);
	cout<<(char)178;
	irA(37,11);
	cout<<(char)219;
	irA(37,12);
	cout<<(char)219;
	Sleep(50);
	//lenea 3
	irA(38,11);
	cout<<(char)219;
	irA(38,12);
	cout<<(char)219;
	Sleep(50);
	//linea 4
	irA(39,4);
	cout<<(char)219;
	irA(39,5);
	cout<<(char)219;
	irA(39,6);
	cout<<(char)219;
	irA(39,7);
	cout<<(char)219;
	irA(39,8);
	cout<<(char)219;
	irA(39,9);
	cout<<(char)219;
	irA(39,10);
	cout<<(char)219;
	irA(39,11);
	cout<<(char)178;
	irA(39,12);
	cout<<(char)178;
	Sleep(50);
	//linea 5
	irA(40,4);
	cout<<(char)178;
	irA(40,5);
	cout<<(char)178;
	irA(40,6);
	cout<<(char)178;
	irA(40,7);
	cout<<(char)178;
	irA(40,8);
	cout<<(char)178;
	irA(40,9);
	cout<<(char)178;
	irA(40,10);
	cout<<(char)178;
	Sleep(50);
	//crea la letra E
	//linea 1
	irA(41,4);
	cout<<(char)219;
	irA(41,5);
	cout<<(char)219;
	irA(41,6);
	cout<<(char)219;
	irA(41,7);
	cout<<(char)219;
	irA(41,8);
	cout<<(char)219;
	irA(41,9);
	cout<<(char)219;
	irA(41,10);
	cout<<(char)219;
	irA(41,11);
	cout<<(char)219;
	irA(41,12);
	cout<<(char)219;
	Sleep(50);
	//linea 2
	irA(42,4);
	cout<<(char)219;
	irA(42,5);
	cout<<(char)178;
	irA(42,6);
	cout<<(char)178;
	irA(42,7);
	cout<<(char)178;
	irA(42,8);
	cout<<(char)219;
	irA(42,9);
	cout<<(char)178;
	irA(42,10);
	cout<<(char)178;
	irA(42,11);
	cout<<(char)178;
	irA(42,12);
	cout<<(char)219;
	Sleep(50);
	//linea 3
	irA(43,4);
	cout<<(char)219;
	irA(43,5);
	cout<<(char)178;
	irA(43,8);
	cout<<(char)219;
	irA(43,9);
	cout<<(char)178;
	irA(43,12);
	cout<<(char)219;
	Sleep(50);
	//linea 4
	irA(44,4);
	cout<<(char)219;
	irA(44,5);
	cout<<(char)178;
	irA(44,8);
	cout<<(char)178;
	irA(44,9);
	cout<<(char)178;
	irA(44,12);
	cout<<(char)219;
	Sleep(50);
	//linea 5
	irA(45,4);
	cout<<(char)178;
	irA(45,5);
	cout<<(char)178;
	irA(45,12);
	cout<<(char)178;
	Sleep(50);
	//crea la letra L
	//linea 1
	irA(46,4);
	cout<<(char)219;
	irA(46,5);
	cout<<(char)219;
	irA(46,6);
	cout<<(char)219;
	irA(46,7);
	cout<<(char)219;
	irA(46,8);
	cout<<(char)219;
	irA(46,9);
	cout<<(char)219;
	irA(46,10);
	cout<<(char)219;
	irA(46,11);
	cout<<(char)219;
	irA(46,12);
	cout<<(char)219;
	Sleep(50);
	//linea2
	irA(47,4);
	cout<<(char)178;
	irA(47,5);
	cout<<(char)178;
	irA(47,6);
	cout<<(char)178;
	irA(47,7);
	cout<<(char)178;
	irA(47,8);
	cout<<(char)178;
	irA(47,9);
	cout<<(char)178;
	irA(47,10);
	cout<<(char)178;
	irA(47,11);
	cout<<(char)178;
	irA(47,12);
	cout<<(char)219;
	Sleep(50);
	//linea 3
	irA(48,12);
	cout<<(char)219;
	Sleep(50);
	//linea 4
	irA(49,12);
	cout<<(char)219;
	Sleep(50);
	//linea 5
	irA(50,12);
	cout<<(char)178;
	Sleep(50);
	//crea la letra I
	//linea 1
	irA(51,4);
	cout<<(char)219;
	irA(51,5);
	cout<<(char)219;
	irA(51,6);
	cout<<(char)219;
	irA(51,7);
	cout<<(char)219;
	irA(51,8);
	cout<<(char)219;
	irA(51,9);
	cout<<(char)219;
	irA(51,10);
	cout<<(char)219;
	irA(51,11);
	cout<<(char)219;
	irA(51,12);
	cout<<(char)219;
	Sleep(50);
	//linea 2
	irA(52,4);
	cout<<(char)178;
	irA(52,5);
	cout<<(char)178;
	irA(52,6);
	cout<<(char)178;
	irA(52,7);
	cout<<(char)178;
	irA(52,8);
	cout<<(char)178;
	irA(52,9);
	cout<<(char)178;
	irA(52,10);
	cout<<(char)178;
	irA(52,11);
	cout<<(char)178;
	irA(52,12);
	cout<<(char)178;
	Sleep(50);
	//crea la letra T
	//linea 1
	irA(53,4);
	cout<<(char)219;
	irA(53,5);
	cout<<(char)178;
	Sleep(50);
	//linea 2
	irA(54,4);
	cout<<(char)219;
	irA(54,5);
	cout<<(char)178;
	Sleep(50);
	//linea 3
	irA(55,4);
	cout<<(char)219;
	irA(55,5);
	cout<<(char)219;
	irA(55,6);
	cout<<(char)219;
	irA(55,7);
	cout<<(char)219;
	irA(55,8);
	cout<<(char)219;
	irA(55,9);
	cout<<(char)219;
	irA(55,10);
	cout<<(char)219;
	irA(55,11);
	cout<<(char)219;
	irA(55,12);
	cout<<(char)219;
	Sleep(50);
	//linea 4
	irA(56,4);
	cout<<(char)219;
	irA(56,5);
	cout<<(char)178;
	irA(56,6);
	cout<<(char)178;
	irA(56,7);
	cout<<(char)178;
	irA(56,8);
	cout<<(char)178;
	irA(56,9);
	cout<<(char)178;
	irA(56,10);
	cout<<(char)178;
	irA(56,11);
	cout<<(char)178;
	irA(56,12);
	cout<<(char)178;
	Sleep(50);
	//linea 5
	irA(57,4);
	cout<<(char)219;
	irA(57,5);
	cout<<(char)178;
	Sleep(50);
	//linea 6
	irA(58,4);
	cout<<(char)178;
	irA(58,5);
	cout<<(char)178;
	Sleep(50);
	//crea la letra O
	//linea 1
	irA(59,6);
	cout<<(char)219;
	irA(59,7);
	cout<<(char)219;
	irA(59,8);
	cout<<(char)219;
	irA(59,9);
	cout<<(char)219;
	irA(59,10);
	cout<<(char)219;
	irA(59,11);
	cout<<(char)178;
	Sleep(50);
	//linea 2
	irA(60,4);
	cout<<(char)219;
	irA(60,5);
	cout<<(char)219;
	irA(60,6);
	cout<<(char)178;
	irA(60,7);
	cout<<(char)178;
	irA(60,8);
	cout<<(char)178;
	irA(60,9);
	cout<<(char)178;
	irA(60,10);
	cout<<(char)178;
	irA(60,11);
	cout<<(char)219;
	irA(60,12);
	cout<<(char)219;
	Sleep(50);
	//linea 3
	irA(61,4);
	cout<<(char)219;
	irA(61,5);
	cout<<(char)219;
	irA(61,11);
	cout<<(char)219;
	irA(61,12);
	cout<<(char)219;
	Sleep(50);
	//linea 4
	irA(62,4);
	cout<<(char)178;
	irA(62,5);
	cout<<(char)178;
	irA(62,6);
	cout<<(char)219;
	irA(62,7);
	cout<<(char)219;
	irA(62,8);
	cout<<(char)219;
	irA(62,9);
	cout<<(char)219;
	irA(62,10);
	cout<<(char)219;
	irA(62,11);
	cout<<(char)178;
	irA(62,12);
	cout<<(char)178;
	Sleep(50);
	//linea 5
	irA(63,6);
	cout<<(char)178;
	irA(63,7);
	cout<<(char)178;
	irA(63,8);
	cout<<(char)178;
	irA(63,9);
	cout<<(char)178;
	irA(63,10);
	cout<<(char)178;
	irA(63,11);
	cout<<(char)178;
	Sleep(50);
	//crea el número 1
	//linea 1
	irA(64,5);
	cout<<(char)219;
	irA(64,6);
	cout<<(char)219;
	irA(64,7);
	cout<<(char)178;
	irA(64,12);
	cout<<(char)219;
	Sleep(50);
	//linea 2
	irA(65,4);
	cout<<(char)219;
	irA(65,5);
	cout<<(char)219;
	irA(65,6);
	cout<<(char)219;
	irA(65,7);
	cout<<(char)219;
	irA(65,8);
	cout<<(char)219;
	irA(65,9);
	cout<<(char)219;
	irA(65,10);
	cout<<(char)219;
	irA(65,11);
	cout<<(char)219;
	irA(65,12);
	cout<<(char)219;
	Sleep(50);
	//linea 3
	irA(66,4);
	cout<<(char)178;
	irA(66,5);
	cout<<(char)178;
	irA(66,6);
	cout<<(char)178;
	irA(66,7);
	cout<<(char)178;
	irA(66,8);
	cout<<(char)178;
	irA(66,9);
	cout<<(char)178;
	irA(66,10);
	cout<<(char)178;
	irA(66,11);
	cout<<(char)178;
	irA(66,12);
	cout<<(char)219;
	Sleep(50);
	//linea 4
	irA(67,12);
	cout<<(char)178;
	//crea el número 8
	//linea 1
	irA(68,6);
	cout<<(char)219;
	irA(68,7);
	cout<<(char)219;
	irA(68,9);
	cout<<(char)219;
	irA(68,10);
	cout<<(char)219;
	Sleep(50);
	//linea 2
	irA(69,4);
	cout<<(char)219;
	irA(69,5);
	cout<<(char)219;
	irA(69,6);
	cout<<(char)178;
	irA(69,7);
	cout<<(char)178;
	irA(69,8);
	cout<<(char)219;
	irA(69,9);
	cout<<(char)178;
	irA(69,10);
	cout<<(char)178;
	irA(69,11);
	cout<<(char)219;
	irA(69,12);
	cout<<(char)219;
	Sleep(50);
	//linea 3
	irA(70,4);
	cout<<(char)219;
	irA(70,5);
	cout<<(char)219;
	irA(70,6);
	cout<<(char)178;
	irA(70,8);
	cout<<(char)219;
	irA(70,9);
	cout<<(char)178;
	irA(70,11);
	cout<<(char)219;
	irA(70,12);
	cout<<(char)219;
	Sleep(50);
	//linea 4
	irA(71,4);
	cout<<(char)178;
	irA(71,5);
	cout<<(char)178;
	irA(71,6);
	cout<<(char)219;
	irA(71,7);
	cout<<(char)219;
	irA(71,8);
	cout<<(char)178;
	irA(71,9);
	cout<<(char)219;
	irA(71,10);
	cout<<(char)219;
	irA(71,11);
	cout<<(char)178;
	irA(71,12);
	cout<<(char)178;
	Sleep(50);
	//linea 5
	irA(72,6);
	cout<<(char)178;
	irA(72,7);
	cout<<(char)178;
	irA(72,9);
	cout<<(char)178;
	irA(72,10);
	cout<<(char)178;
	Beep(1500,700);//emite un pitido
	Sleep(50);
}
