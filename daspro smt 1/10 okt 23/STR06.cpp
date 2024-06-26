
#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

void gotoxy(int x, int y)
{
    HANDLE hConsoleOutput;
    COORD dwCursorPosition;
    cout.flush();
    dwCursorPosition.X = x;
    dwCursorPosition.Y = y;
    hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsoleOutput,dwCursorPosition);
}

int main()
{
	char Kota1[100]="SURABAYA";
	char Kota2[100]="SIDOARJO";

 	gotoxy (20,10);
    cout<<Kota1<<endl;
	gotoxy (70,10);
    cout<<Kota2<<endl;
 	getch();
}
