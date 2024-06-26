void gotoxy(int X, int Y)
{
	COORD k = {X,Y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),k);
}
