#include <iostream>
#include <windows.h> //para las funciones sleep y coord

using namespace std;

void gotoxy(int,int );
void setColor(int);

int main(int argc, char** argv) {
	cout<<"Hola mundo estoy probando esto UnU"<<endl;
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
	setConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color);
}
