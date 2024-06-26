#include <iostream>
#include <conio.h>

using namespace std;

int HitungDeret(int Batas)
{
   int Total=0;
   for(int I=1 ; I <= Batas ; I++)
   {
   	Total=Total+I;
   }
   return Total;
}

int main( )

{
	int N,T=0;
	cout<<"Batas Deret = ";
   cin>>N;
   T=HitungDeret(N);
   cout<<"Total Deret = "<<T<<endl;
   getch();
}
