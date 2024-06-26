#include <iostream>
#include <conio.h>
#include <Deret1.h>
using namespace std;

void Cetak(int N)
{
	cout<<endl;
	for(int I = 1 ; I <= N ; I++)
   {
   	cout<<I<<' ';
   }
   cout<<endl;

}

int main( )
{
	int N,Tot;
   float Rata2;
	cout<<"Batas Deret = ";
   cin>>N;
   Cetak(N);

   Tot=HitungDeret(N);
   cout<<endl;
   cout<<"Total Deret = "<<Tot<<endl;
   Rata2=Rata2Deret(N);
   cout<<"Rata-Rata   = "<<Rata2<<endl;
   getch();
}


