#include <iostream>
#include <conio.h>

using namespace std;

int Jumlah(int X, int Y)
{
	int Total;
   Total=X+Y;
   return Total;
}

int main()
{
   int X = 10;
   int Y = 20;
   int Total=0;
   Total=Jumlah(X,Y);
   cout<<Total;
   getch();
}
