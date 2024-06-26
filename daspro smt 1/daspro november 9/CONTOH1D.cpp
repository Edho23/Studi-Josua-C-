#include <iostream>
#include <conio.h>

using namespace std;


void HitungPangkat(int Bil, int Pangkat)
{
	int Hasil=1;
   for (int I = 1 ; I <= Pangkat ; I++)
   {
   	Hasil=Hasil*Bil;
   }
	cout<<Bil<<" Pangkat "<<Pangkat<<" = "<<Hasil<<endl;
}

int main()
{
   int Bil,Pangkat;
   cout<<"Bilangan = ";
   cin>>Bil;
   cout<<"Pangkat = ";
   cin>>Pangkat;
   cout<<endl;
   HitungPangkat(Bil,Pangkat);
   getch();
}
