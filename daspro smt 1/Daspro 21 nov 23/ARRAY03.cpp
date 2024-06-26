// Mengurutkan N buah Data

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
   int Data[100];
   int N;

   cout<<"Banyaknya Data = ";
   cin>>N;

   //Memasukkan N buah data
   cout<<endl;
   for(int I=1 ; I<=N ; I++)
   {
     	cout<<"Data Ke "<<I<<" = ";
      cin>>Data[I];
   }

   //Mengurutkan
   for(int I=1 ; I<=N-1 ; I++)
   {
   	for(int J=I+1 ; J<=N ; J++)
      {
      	if(Data[I] > Data[J])
         {
         	//Menukar Data[I] dengan Data[J]
            int Bil;
            Bil=Data[I];
            Data[I]=Data[J];
            Data[J]=Bil;
         }
      }
   }

   //Menampilkan Hasilnya
   cout<<endl<<endl<<"Hasil Pengurutan"<<endl;
   for(int I=1 ; I<=N ; I++)
   {
     	cout<<Data[I]<<"  ";
   }
   getch();
}
