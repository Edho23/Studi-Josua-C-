#include <iostream>

using namespace std;

struct Mhs
{
   char NBI[10];
   char Nama[50];
   char Alamat[50];
};

int main()
{
   Mhs DatMhs[100];
   int N;
   cout<<"Banyaknya Data = ";
   cin>>N;
   for(int I = 0 ; I <= N-1; I++)
   {
   
    cout<<"Data Ke "<<(I+1)<<endl;
	cout<<"N B I  = ";
   	gets(DatMhs[I].NBI);
   	cout<<"Nama   = ";
   	gets(DatMhs[I].Nama);
   	cout<<"Alamat = ";
   	gets(DatMhs[I].Alamat);
   }

   cout<<"Data Yang Dimasukkan "<<endl<<endl;
   for(int I = 0 ; I <= N-1 ; I++)
   {
   	cout<<"N B I  = "<<DatMhs[I].NBI<<endl;
   	cout<<"Nama   = "<<DatMhs[I].Nama<<endl;
   	cout<<"Alamat = "<<DatMhs[I].Alamat<<endl;
   	cout<<endl;
   }
}
