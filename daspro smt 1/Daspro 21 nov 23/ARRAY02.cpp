// Matrik Transpose

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
   int Matrik[100][100];
   int Baris,Kolom;

   // Memasukkan ukuran Matrik
   cout<<"Baris = ";
   cin>>Baris;
   cout<<"Kolom = ";
   cin>>Kolom;

   //Memasukkan elemen Matrik
   cout<<endl;
   for(int I=0 ; I<=Baris-1 ; I++)
   {
   	for(int J=0; J<=Kolom-1 ; J++)
      {
      	cout<<"Matrik("<<(I+1)<<','<<(J+1)<<") = ";
         cin>>Matrik[I][J];
      }
   }

   //Tampil Matrik asal
   cout<<endl<<endl<<"Matrik Asal"<<endl;
   for(int I=0 ; I<=Baris-1 ; I++)
   {
   	for(int J=0 ; J<=Kolom-1 ; J++)
      {
      	cout<<Matrik[I][J]<<"\t";
      }
      cout<<endl;
   }

   //Tampil Matrik Transpose
   cout<<endl<<endl<<"Matrik Transpose"<<endl;
   for(int I=0 ; I<=Kolom-1 ; I++)
   {
   	for(int J=0 ; J<=Baris-1 ; J++)
      {
      	cout<<Matrik[J][I]<<"\t";
      }
      cout<<endl;
   }
   getch();
}
