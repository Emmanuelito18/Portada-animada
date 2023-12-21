#include <iostream>
#include <windows.h> //para las funciones sleep y coord

using namespace std;

void gotoxy(int,int );
void setColor(int);
void ocultarCursor();
void portada();
void texto();

int main(int argc, char** argv) {
	portada();
	system("pause");
	return 0;
}

void gotoxy(int x,int y){
	COORD coord;
	coord.X=x;
	coord.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void setColor(int color){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color);
}

void ocultarCursor(){
	CONSOLE_CURSOR_INFO cci={100,FALSE};
	
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE),&cci);
}

void portada(){
	ocultarCursor();
	system("cls");
	//setColor(31);
	texto();
	
}

void texto(){
	//E
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
	cout<<(char)178;//sombra
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
	//M
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
	//M
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
	//A
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
	//N
	
	//U
	
	//E
	
	//L
	
	//I
	
	//T
	
	//O
	
	//1
	
	//8
}
