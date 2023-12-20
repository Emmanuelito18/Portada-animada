#include <iostream>
#include <windows.h> //para las funciones sleep y coord

using namespace std;

void gotoxy(int,int );
void setColor(int);
void ocultarCursor();
void portada();

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

