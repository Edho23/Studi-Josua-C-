#include <iostream>
#include <conio.h>

using namespace std;

void Deret(int Batas)  // Fungsi
{ // awal fungsi
   for(int I = 1 ; I <= Batas ; I++)
   {
   	cout<<I<<' ';
   }

} // akhir fungsi

int main( )
{
	int N;
   cout<<"Batas Deret = ";
   cin>>N;
   cout<<endl;
   Deret(N); // Pemanggilan fungsi Deret
   getch();
}
