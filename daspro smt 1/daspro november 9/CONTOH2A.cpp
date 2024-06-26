#include <iostream>
#include <conio.h>

using namespace std;

void HitungDeret(int N, int &Total)
{
   Total=0;
   for(int I=1 ; I <= N ; I++)
   {
   	Total=Total+I;
   }
}

int main( )
{
	int N,T=0;
  	cout<<"Batas Deret = ";
   cin>>N;
   HitungDeret(N,T);
   cout<<"Total Deret = "<<T<<endl;
   getch();
}


