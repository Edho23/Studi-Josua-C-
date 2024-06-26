#include <iostream>
#include <conio.h>

using namespace std;

void Header(char MK[50])
{
	cout<<"Mata Kuliah "<<MK<<endl;
}

int main()
{
   Header("PEMROGRAMAN DASAR"); // Memanggil fungsi Cetak
   getch();
}
