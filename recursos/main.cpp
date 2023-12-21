#include <iostream>
#include <windows.h> //para las funciones sleep y coord

using namespace std;

void gotoxy(int,int );
void ocultarCursor();
void portada();
void animacion();

int main(int argc, char** argv) {
	system("color 1f");//cambia el color de la consola a fondo azul y texto blanco
	portada();//llama a la funci�n portada
	system("color");//pone el color de la consola al establecido por defecto configurado
	system("pause");
	return 0;
}

void gotoxy(int x,int y){
	COORD coord;
	coord.X=x;
	coord.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);//modifica la ubicacion del cursor de la consola
}

void ocultarCursor(){
	CONSOLE_CURSOR_INFO cci={100,FALSE};
	
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE),&cci);//oculta el cursor de la consola
}

void portada(){
	ocultarCursor();//llama a la funci�n ocultaCursor
	animacion();//llama a la funci�n para comenzar la animaci�n
	gotoxy(0,15);//cambia la posici�n del cursor para mostrar texto final de la portada
	
}

void animacion(){//cada parte de la animacion se hace imprimiendo partes de las letras mediante la funci�n gotoxy
	gotoxy(25,2);
	cout<<"Este programa ha sido creado por:"<<endl;
	//crea la letra E
	//linea 1
	gotoxy(9,4);
	cout<<(char)219;
	gotoxy(9,5);
	cout<<(char)219;
	gotoxy(9,6);
	cout<<(char)219;
	gotoxy(9,7);
	cout<<(char)219;
	gotoxy(9,8);
	cout<<(char)219;
	gotoxy(9,9);
	cout<<(char)219;
	gotoxy(9,10);
	cout<<(char)219;
	gotoxy(9,11);
	cout<<(char)219;
	gotoxy(9,12);
	cout<<(char)219;
	Sleep(50);
	//linea 2
	gotoxy(10,4);
	cout<<(char)219;
	gotoxy(10,5);
	cout<<(char)178;
	gotoxy(10,6);
	cout<<(char)178;
	gotoxy(10,7);
	cout<<(char)178;
	gotoxy(10,8);
	cout<<(char)219;
	gotoxy(10,9);
	cout<<(char)178;
	gotoxy(10,10);
	cout<<(char)178;
	gotoxy(10,11);
	cout<<(char)178;
	gotoxy(10,12);
	cout<<(char)219;
	Sleep(50);
	//linea 3
	gotoxy(11,4);
	cout<<(char)219;
	gotoxy(11,5);
	cout<<(char)178;
	gotoxy(11,8);
	cout<<(char)219;
	gotoxy(11,9);
	cout<<(char)178;
	gotoxy(11,12);
	cout<<(char)219;
	Sleep(50);
	//linea 4
	gotoxy(12,4);
	cout<<(char)219;
	gotoxy(12,5);
	cout<<(char)178;
	gotoxy(12,8);
	cout<<(char)178;
	gotoxy(12,9);
	cout<<(char)178;
	gotoxy(12,12);
	cout<<(char)219;
	Sleep(50);
	//linea 5
	gotoxy(13,4);
	cout<<(char)178;
	gotoxy(13,5);
	cout<<(char)178;
	gotoxy(13,12);
	cout<<(char)178;
	Sleep(50);
	//crea la letra M
	//linea 1
	gotoxy(14,4);
	cout<<(char)219;
	gotoxy(14,5);
	cout<<(char)219;
	gotoxy(14,6);
	cout<<(char)219;
	gotoxy(14,7);
	cout<<(char)219;
	gotoxy(14,8);
	cout<<(char)219;
	gotoxy(14,9);
	cout<<(char)219;
	gotoxy(14,10);
	cout<<(char)219;
	gotoxy(14,11);
	cout<<(char)219;
	gotoxy(14,12);
	cout<<(char)219;
	Sleep(50);
	//linea 2
	gotoxy(15,4);
	cout<<(char)178;
	gotoxy(15,5);
	cout<<(char)219;
	gotoxy(15,6);
	cout<<(char)219;
	gotoxy(15,7);
	cout<<(char)178;
	gotoxy(15,8);
	cout<<(char)178;
	gotoxy(15,9);
	cout<<(char)178;
	gotoxy(15,10);
	cout<<(char)178;
	gotoxy(15,11);
	cout<<(char)178;
	gotoxy(15,12);
	cout<<(char)178;
	Sleep(50);
	//linea 3
	gotoxy(16,5);
	cout<<(char)178;
	gotoxy(16,6);
	cout<<(char)178;
	gotoxy(16,7);
	cout<<(char)219;
	gotoxy(16,8);
	cout<<(char)219;
	Sleep(50);
	//linea 4
	gotoxy(17,5);
	cout<<(char)219;
	gotoxy(17,6);
	cout<<(char)219;
	gotoxy(17,7);
	cout<<(char)178;
	gotoxy(17,8);
	cout<<(char)178;
	Sleep(50);
	//linea 5
	gotoxy(18,4);
	cout<<(char)219;
	gotoxy(18,5);
	cout<<(char)219;
	gotoxy(18,6);
	cout<<(char)219;
	gotoxy(18,7);
	cout<<(char)219;
	gotoxy(18,8);
	cout<<(char)219;
	gotoxy(18,9);
	cout<<(char)219;
	gotoxy(18,10);
	cout<<(char)219;
	gotoxy(18,11);
	cout<<(char)219;
	gotoxy(18,12);
	cout<<(char)219;
	Sleep(50);
	//linea 6
	gotoxy(19,4);
	cout<<(char)178;
	gotoxy(19,5);
	cout<<(char)178;
	gotoxy(19,6);
	cout<<(char)178;
	gotoxy(19,7);
	cout<<(char)178;
	gotoxy(19,8);
	cout<<(char)178;
	gotoxy(19,9);
	cout<<(char)178;
	gotoxy(19,10);
	cout<<(char)178;
	gotoxy(19,11);
	cout<<(char)178;
	gotoxy(19,12);
	cout<<(char)178;
	Sleep(50);
	//crea la letra M
	//linea 1
	gotoxy(20,4);
	cout<<(char)219;
	gotoxy(20,5);
	cout<<(char)219;
	gotoxy(20,6);
	cout<<(char)219;
	gotoxy(20,7);
	cout<<(char)219;
	gotoxy(20,8);
	cout<<(char)219;
	gotoxy(20,9);
	cout<<(char)219;
	gotoxy(20,10);
	cout<<(char)219;
	gotoxy(20,11);
	cout<<(char)219;
	gotoxy(20,12);
	cout<<(char)219;
	Sleep(50);
	//linea 2
	gotoxy(21,4);
	cout<<(char)178;
	gotoxy(21,5);
	cout<<(char)219;
	gotoxy(21,6);
	cout<<(char)219;
	gotoxy(21,7);
	cout<<(char)178;
	gotoxy(21,8);
	cout<<(char)178;
	gotoxy(21,9);
	cout<<(char)178;
	gotoxy(21,10);
	cout<<(char)178;
	gotoxy(21,11);
	cout<<(char)178;
	gotoxy(21,12);
	cout<<(char)178;
	Sleep(50);
	//linea 3
	gotoxy(22,5);
	cout<<(char)178;
	gotoxy(22,6);
	cout<<(char)178;
	gotoxy(22,7);
	cout<<(char)219;
	gotoxy(22,8);
	cout<<(char)219;
	Sleep(50);
	//linea 4
	gotoxy(23,5);
	cout<<(char)219;
	gotoxy(23,6);
	cout<<(char)219;
	gotoxy(23,7);
	cout<<(char)178;
	gotoxy(23,8);
	cout<<(char)178;
	Sleep(50);
	//linea 5
	gotoxy(24,4);
	cout<<(char)219;
	gotoxy(24,5);
	cout<<(char)219;
	gotoxy(24,6);
	cout<<(char)219;
	gotoxy(24,7);
	cout<<(char)219;
	gotoxy(24,8);
	cout<<(char)219;
	gotoxy(24,9);
	cout<<(char)219;
	gotoxy(24,10);
	cout<<(char)219;
	gotoxy(24,11);
	cout<<(char)219;
	gotoxy(24,12);
	cout<<(char)219;
	Sleep(50);
	//linea 6
	gotoxy(25,4);
	cout<<(char)178;
	gotoxy(25,5);
	cout<<(char)178;
	gotoxy(25,6);
	cout<<(char)178;
	gotoxy(25,7);
	cout<<(char)178;
	gotoxy(25,8);
	cout<<(char)178;
	gotoxy(25,9);
	cout<<(char)178;
	gotoxy(25,10);
	cout<<(char)178;
	gotoxy(25,11);
	cout<<(char)178;
	gotoxy(25,12);
	cout<<(char)178;
	Sleep(50);
	//crea la letra A
	//linea 1
	gotoxy(26,6);
	cout<<(char)219;
	gotoxy(26,7);
	cout<<(char)219;
	gotoxy(26,8);
	cout<<(char)219;
	gotoxy(26,9);
	cout<<(char)219;
	gotoxy(26,10);
	cout<<(char)219;
	gotoxy(26,11);
	cout<<(char)219;
	gotoxy(26,12);
	cout<<(char)219;
	Sleep(50);
	//linea 2
	gotoxy(27,4);
	cout<<(char)219;
	gotoxy(27,5);
	cout<<(char)219;
	gotoxy(27,6);
	cout<<(char)178;
	gotoxy(27,7);
	cout<<(char)178;
	gotoxy(27,8);
	cout<<(char)219;
	gotoxy(27,9);
	cout<<(char)178;
	gotoxy(27,10);
	cout<<(char)178;
	gotoxy(27,11);
	cout<<(char)178;
	gotoxy(27,12);
	cout<<(char)178;
	Sleep(50);
	//linea 3
	gotoxy(28,4);
	cout<<(char)219;
	gotoxy(28,5);
	cout<<(char)219;
	gotoxy(28,8);
	cout<<(char)219;
	gotoxy(28,9);
	cout<<(char)178;
	Sleep(50);
	//linea 4
	gotoxy(29,4);
	cout<<(char)178;
	gotoxy(29,5);
	cout<<(char)178;
	gotoxy(29,6);
	cout<<(char)219;
	gotoxy(29,7);
	cout<<(char)219;
	gotoxy(29,8);
	cout<<(char)219;
	gotoxy(29,9);
	cout<<(char)219;
	gotoxy(29,10);
	cout<<(char)219;
	gotoxy(29,11);
	cout<<(char)219;
	gotoxy(29,12);
	cout<<(char)219;
	Sleep(50);
	//linea 5
	gotoxy(30,6);
	cout<<(char)178;
	gotoxy(30,7);
	cout<<(char)178;
	gotoxy(30,8);
	cout<<(char)178;
	gotoxy(30,9);
	cout<<(char)178;
	gotoxy(30,10);
	cout<<(char)178;
	gotoxy(30,11);
	cout<<(char)178;
	gotoxy(30,12);
	cout<<(char)178;
	Sleep(50);
	//crea la letra N
	//linea 1
	gotoxy(31,4);
	cout<<(char)219;
	gotoxy(31,5);
	cout<<(char)219;
	gotoxy(31,6);
	cout<<(char)219;
	gotoxy(31,7);
	cout<<(char)219;
	gotoxy(31,8);
	cout<<(char)219;
	gotoxy(31,9);
	cout<<(char)219;
	gotoxy(31,10);
	cout<<(char)219;
	gotoxy(31,11);
	cout<<(char)219;
	gotoxy(31,12);
	cout<<(char)219;
	Sleep(50);
	//linea 2
	gotoxy(32,4);
	cout<<(char)178;
	gotoxy(32,5);
	cout<<(char)178;
	gotoxy(32,6);
	cout<<(char)178;
	gotoxy(32,7);
	cout<<(char)219;
	gotoxy(32,8);
	cout<<(char)219;
	gotoxy(32,9);
	cout<<(char)178;
	gotoxy(32,10);
	cout<<(char)178;
	gotoxy(32,11);
	cout<<(char)178;
	gotoxy(32,12);
	cout<<(char)178;
	Sleep(50);
	//linea 3
	gotoxy(33,7);
	cout<<(char)178;
	gotoxy(33,8);
	cout<<(char)178;
	gotoxy(33,9);
	cout<<(char)219;
	gotoxy(33,10);
	cout<<(char)219;
	Sleep(50);
	//linea 4
	gotoxy(34,4);
	cout<<(char)219;
	gotoxy(34,5);
	cout<<(char)219;
	gotoxy(34,6);
	cout<<(char)219;
	gotoxy(34,7);
	cout<<(char)219;
	gotoxy(34,8);
	cout<<(char)219;
	gotoxy(34,9);
	cout<<(char)219;
	gotoxy(34,10);
	cout<<(char)219;
	gotoxy(34,11);
	cout<<(char)219;
	gotoxy(34,12);
	cout<<(char)219;
	//linea 5
	gotoxy(35,4);
	cout<<(char)178;
	gotoxy(35,5);
	cout<<(char)178;
	gotoxy(35,6);
	cout<<(char)178;
	gotoxy(35,7);
	cout<<(char)178;
	gotoxy(35,8);
	cout<<(char)178;
	gotoxy(35,9);
	cout<<(char)178;
	gotoxy(35,10);
	cout<<(char)178;
	gotoxy(35,11);
	cout<<(char)178;
	gotoxy(35,12);
	cout<<(char)178;
	Sleep(50);
	//crea la letra U
	//linea 1
	gotoxy(36,4);
	cout<<(char)219;
	gotoxy(36,5);
	cout<<(char)219;
	gotoxy(36,6);
	cout<<(char)219;
	gotoxy(36,7);
	cout<<(char)219;
	gotoxy(36,8);
	cout<<(char)219;
	gotoxy(36,9);
	cout<<(char)219;
	gotoxy(36,10);
	cout<<(char)219;
	gotoxy(36,11);
	cout<<(char)178;
	Sleep(50);
	//linea 2
	gotoxy(37,4);
	cout<<(char)178;
	gotoxy(37,5);
	cout<<(char)178;
	gotoxy(37,6);
	cout<<(char)178;
	gotoxy(37,7);
	cout<<(char)178;
	gotoxy(37,8);
	cout<<(char)178;
	gotoxy(37,9);
	cout<<(char)178;
	gotoxy(37,10);
	cout<<(char)178;
	gotoxy(37,11);
	cout<<(char)219;
	gotoxy(37,12);
	cout<<(char)219;
	Sleep(50);
	//lenea 3
	gotoxy(38,11);
	cout<<(char)219;
	gotoxy(38,12);
	cout<<(char)219;
	Sleep(50);
	//linea 4
	gotoxy(39,4);
	cout<<(char)219;
	gotoxy(39,5);
	cout<<(char)219;
	gotoxy(39,6);
	cout<<(char)219;
	gotoxy(39,7);
	cout<<(char)219;
	gotoxy(39,8);
	cout<<(char)219;
	gotoxy(39,9);
	cout<<(char)219;
	gotoxy(39,10);
	cout<<(char)219;
	gotoxy(39,11);
	cout<<(char)178;
	gotoxy(39,12);
	cout<<(char)178;
	Sleep(50);
	//linea 5
	gotoxy(40,4);
	cout<<(char)178;
	gotoxy(40,5);
	cout<<(char)178;
	gotoxy(40,6);
	cout<<(char)178;
	gotoxy(40,7);
	cout<<(char)178;
	gotoxy(40,8);
	cout<<(char)178;
	gotoxy(40,9);
	cout<<(char)178;
	gotoxy(40,10);
	cout<<(char)178;
	Sleep(50);
	//crea la letra E
	//linea 1
	gotoxy(41,4);
	cout<<(char)219;
	gotoxy(41,5);
	cout<<(char)219;
	gotoxy(41,6);
	cout<<(char)219;
	gotoxy(41,7);
	cout<<(char)219;
	gotoxy(41,8);
	cout<<(char)219;
	gotoxy(41,9);
	cout<<(char)219;
	gotoxy(41,10);
	cout<<(char)219;
	gotoxy(41,11);
	cout<<(char)219;
	gotoxy(41,12);
	cout<<(char)219;
	Sleep(50);
	//linea 2
	gotoxy(42,4);
	cout<<(char)219;
	gotoxy(42,5);
	cout<<(char)178;
	gotoxy(42,6);
	cout<<(char)178;
	gotoxy(42,7);
	cout<<(char)178;
	gotoxy(42,8);
	cout<<(char)219;
	gotoxy(42,9);
	cout<<(char)178;
	gotoxy(42,10);
	cout<<(char)178;
	gotoxy(42,11);
	cout<<(char)178;
	gotoxy(42,12);
	cout<<(char)219;
	Sleep(50);
	//linea 3
	gotoxy(43,4);
	cout<<(char)219;
	gotoxy(43,5);
	cout<<(char)178;
	gotoxy(43,8);
	cout<<(char)219;
	gotoxy(43,9);
	cout<<(char)178;
	gotoxy(43,12);
	cout<<(char)219;
	Sleep(50);
	//linea 4
	gotoxy(44,4);
	cout<<(char)219;
	gotoxy(44,5);
	cout<<(char)178;
	gotoxy(44,8);
	cout<<(char)178;
	gotoxy(44,9);
	cout<<(char)178;
	gotoxy(44,12);
	cout<<(char)219;
	Sleep(50);
	//linea 5
	gotoxy(45,4);
	cout<<(char)178;
	gotoxy(45,5);
	cout<<(char)178;
	gotoxy(45,12);
	cout<<(char)178;
	Sleep(50);
	//crea la letra L
	//linea 1
	gotoxy(46,4);
	cout<<(char)219;
	gotoxy(46,5);
	cout<<(char)219;
	gotoxy(46,6);
	cout<<(char)219;
	gotoxy(46,7);
	cout<<(char)219;
	gotoxy(46,8);
	cout<<(char)219;
	gotoxy(46,9);
	cout<<(char)219;
	gotoxy(46,10);
	cout<<(char)219;
	gotoxy(46,11);
	cout<<(char)219;
	gotoxy(46,12);
	cout<<(char)219;
	Sleep(50);
	//linea2
	gotoxy(47,4);
	cout<<(char)178;
	gotoxy(47,5);
	cout<<(char)178;
	gotoxy(47,6);
	cout<<(char)178;
	gotoxy(47,7);
	cout<<(char)178;
	gotoxy(47,8);
	cout<<(char)178;
	gotoxy(47,9);
	cout<<(char)178;
	gotoxy(47,10);
	cout<<(char)178;
	gotoxy(47,11);
	cout<<(char)178;
	gotoxy(47,12);
	cout<<(char)219;
	Sleep(50);
	//linea 3
	gotoxy(48,12);
	cout<<(char)219;
	Sleep(50);
	//linea 4
	gotoxy(49,12);
	cout<<(char)219;
	Sleep(50);
	//linea 5
	gotoxy(50,12);
	cout<<(char)178;
	Sleep(50);
	//crea la letra I
	//linea 1
	gotoxy(51,4);
	cout<<(char)219;
	gotoxy(51,5);
	cout<<(char)219;
	gotoxy(51,6);
	cout<<(char)219;
	gotoxy(51,7);
	cout<<(char)219;
	gotoxy(51,8);
	cout<<(char)219;
	gotoxy(51,9);
	cout<<(char)219;
	gotoxy(51,10);
	cout<<(char)219;
	gotoxy(51,11);
	cout<<(char)219;
	gotoxy(51,12);
	cout<<(char)219;
	Sleep(50);
	//linea 2
	gotoxy(52,4);
	cout<<(char)178;
	gotoxy(52,5);
	cout<<(char)178;
	gotoxy(52,6);
	cout<<(char)178;
	gotoxy(52,7);
	cout<<(char)178;
	gotoxy(52,8);
	cout<<(char)178;
	gotoxy(52,9);
	cout<<(char)178;
	gotoxy(52,10);
	cout<<(char)178;
	gotoxy(52,11);
	cout<<(char)178;
	gotoxy(52,12);
	cout<<(char)178;
	Sleep(50);
	//crea la letra T
	//linea 1
	gotoxy(53,4);
	cout<<(char)219;
	gotoxy(53,5);
	cout<<(char)178;
	Sleep(50);
	//linea 2
	gotoxy(54,4);
	cout<<(char)219;
	gotoxy(54,5);
	cout<<(char)178;
	Sleep(50);
	//linea 3
	gotoxy(55,4);
	cout<<(char)219;
	gotoxy(55,5);
	cout<<(char)219;
	gotoxy(55,6);
	cout<<(char)219;
	gotoxy(55,7);
	cout<<(char)219;
	gotoxy(55,8);
	cout<<(char)219;
	gotoxy(55,9);
	cout<<(char)219;
	gotoxy(55,10);
	cout<<(char)219;
	gotoxy(55,11);
	cout<<(char)219;
	gotoxy(55,12);
	cout<<(char)219;
	Sleep(50);
	//linea 4
	gotoxy(56,4);
	cout<<(char)219;
	gotoxy(56,5);
	cout<<(char)178;
	gotoxy(56,6);
	cout<<(char)178;
	gotoxy(56,7);
	cout<<(char)178;
	gotoxy(56,8);
	cout<<(char)178;
	gotoxy(56,9);
	cout<<(char)178;
	gotoxy(56,10);
	cout<<(char)178;
	gotoxy(56,11);
	cout<<(char)178;
	gotoxy(56,12);
	cout<<(char)178;
	Sleep(50);
	//linea 5
	gotoxy(57,4);
	cout<<(char)219;
	gotoxy(57,5);
	cout<<(char)178;
	Sleep(50);
	//linea 6
	gotoxy(58,4);
	cout<<(char)178;
	gotoxy(58,5);
	cout<<(char)178;
	Sleep(50);
	//crea la letra O
	//linea 1
	gotoxy(59,6);
	cout<<(char)219;
	gotoxy(59,7);
	cout<<(char)219;
	gotoxy(59,8);
	cout<<(char)219;
	gotoxy(59,9);
	cout<<(char)219;
	gotoxy(59,10);
	cout<<(char)219;
	gotoxy(59,11);
	cout<<(char)178;
	Sleep(50);
	//linea 2
	gotoxy(60,4);
	cout<<(char)219;
	gotoxy(60,5);
	cout<<(char)219;
	gotoxy(60,6);
	cout<<(char)178;
	gotoxy(60,7);
	cout<<(char)178;
	gotoxy(60,8);
	cout<<(char)178;
	gotoxy(60,9);
	cout<<(char)178;
	gotoxy(60,10);
	cout<<(char)178;
	gotoxy(60,11);
	cout<<(char)219;
	gotoxy(60,12);
	cout<<(char)219;
	Sleep(50);
	//linea 3
	gotoxy(61,4);
	cout<<(char)219;
	gotoxy(61,5);
	cout<<(char)219;
	gotoxy(61,11);
	cout<<(char)219;
	gotoxy(61,12);
	cout<<(char)219;
	Sleep(50);
	//linea 4
	gotoxy(62,4);
	cout<<(char)178;
	gotoxy(62,5);
	cout<<(char)178;
	gotoxy(62,6);
	cout<<(char)219;
	gotoxy(62,7);
	cout<<(char)219;
	gotoxy(62,8);
	cout<<(char)219;
	gotoxy(62,9);
	cout<<(char)219;
	gotoxy(62,10);
	cout<<(char)219;
	gotoxy(62,11);
	cout<<(char)178;
	gotoxy(62,12);
	cout<<(char)178;
	Sleep(50);
	//linea 5
	gotoxy(63,6);
	cout<<(char)178;
	gotoxy(63,7);
	cout<<(char)178;
	gotoxy(63,8);
	cout<<(char)178;
	gotoxy(63,9);
	cout<<(char)178;
	gotoxy(63,10);
	cout<<(char)178;
	gotoxy(63,11);
	cout<<(char)178;
	Sleep(50);
	//crea el n�mero 1
	//linea 1
	gotoxy(64,5);
	cout<<(char)219;
	gotoxy(64,6);
	cout<<(char)219;
	gotoxy(64,7);
	cout<<(char)178;
	gotoxy(64,12);
	cout<<(char)219;
	Sleep(50);
	//linea 2
	gotoxy(65,4);
	cout<<(char)219;
	gotoxy(65,5);
	cout<<(char)219;
	gotoxy(65,6);
	cout<<(char)219;
	gotoxy(65,7);
	cout<<(char)219;
	gotoxy(65,8);
	cout<<(char)219;
	gotoxy(65,9);
	cout<<(char)219;
	gotoxy(65,10);
	cout<<(char)219;
	gotoxy(65,11);
	cout<<(char)219;
	gotoxy(65,12);
	cout<<(char)219;
	Sleep(50);
	//linea 3
	gotoxy(66,4);
	cout<<(char)178;
	gotoxy(66,5);
	cout<<(char)178;
	gotoxy(66,6);
	cout<<(char)178;
	gotoxy(66,7);
	cout<<(char)178;
	gotoxy(66,8);
	cout<<(char)178;
	gotoxy(66,9);
	cout<<(char)178;
	gotoxy(66,10);
	cout<<(char)178;
	gotoxy(66,11);
	cout<<(char)178;
	gotoxy(66,12);
	cout<<(char)219;
	Sleep(50);
	//linea 4
	gotoxy(67,12);
	cout<<(char)178;
	//crea el n�mero 8
	//linea 1
	gotoxy(68,6);
	cout<<(char)219;
	gotoxy(68,7);
	cout<<(char)219;
	gotoxy(68,9);
	cout<<(char)219;
	gotoxy(68,10);
	cout<<(char)219;
	Sleep(50);
	//linea 2
	gotoxy(69,4);
	cout<<(char)219;
	gotoxy(69,5);
	cout<<(char)219;
	gotoxy(69,6);
	cout<<(char)178;
	gotoxy(69,7);
	cout<<(char)178;
	gotoxy(69,8);
	cout<<(char)219;
	gotoxy(69,9);
	cout<<(char)178;
	gotoxy(69,10);
	cout<<(char)178;
	gotoxy(69,11);
	cout<<(char)219;
	gotoxy(69,12);
	cout<<(char)219;
	Sleep(50);
	//linea 3
	gotoxy(70,4);
	cout<<(char)219;
	gotoxy(70,5);
	cout<<(char)219;
	gotoxy(70,6);
	cout<<(char)178;
	gotoxy(70,8);
	cout<<(char)219;
	gotoxy(70,9);
	cout<<(char)178;
	gotoxy(70,11);
	cout<<(char)219;
	gotoxy(70,12);
	cout<<(char)219;
	Sleep(50);
	//linea 4
	gotoxy(71,4);
	cout<<(char)178;
	gotoxy(71,5);
	cout<<(char)178;
	gotoxy(71,6);
	cout<<(char)219;
	gotoxy(71,7);
	cout<<(char)219;
	gotoxy(71,8);
	cout<<(char)178;
	gotoxy(71,9);
	cout<<(char)219;
	gotoxy(71,10);
	cout<<(char)219;
	gotoxy(71,11);
	cout<<(char)178;
	gotoxy(71,12);
	cout<<(char)178;
	Sleep(50);
	//linea 5
	gotoxy(72,6);
	cout<<(char)178;
	gotoxy(72,7);
	cout<<(char)178;
	gotoxy(72,9);
	cout<<(char)178;
	gotoxy(72,10);
	cout<<(char)178;
	Beep(1500,700);//emite un pitido
	Sleep(50);
}
