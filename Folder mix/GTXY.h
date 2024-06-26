#include <windows.h>

void gotoxy(int x,int y){
COORD V={x, y};
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), V);
}