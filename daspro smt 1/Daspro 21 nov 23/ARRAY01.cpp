// Mencari bil terbesar dari N buah data

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int Data[100];
   int N,Max;
   cout<<"Banyaknya Data = ";
   cin>>N;

   // Memasukkan data
   for(int I=0 ; I<=N-1 ; I++)
   {
      cout<<"Data Ke "<<I+1<<" = ";
      cin>>Data[I];
   }

   // Mencari bil Terbesar
   Max=Data[0];
   for(int I=1 ; I<=N-1 ; I++)
   {
      if(Max < Data[I])
      	Max=Data[I];
   }
   cout<<"Bilangan Terbesar = "<<Max<<endl;
   getch();
}
