#include <iostream>

using namespace std;


struct Mhs
{
   char NBI[9];
   char Nama[50];
   char Alamat[50];
};


void Input_Data(Mhs DatMhs[], int N)
{
	for(int I = 0 ; I <= N-1 ; I++)
   {
   	cout<<"Data Ke "<<(I+1)<<endl;
      cout<<"N B I  = ";
      cin>>DatMhs[I].NBI;
      cout<<"Nama   = ";
      gets(DatMhs[I].Nama);
      cout<<"Alamat = ";
      gets(DatMhs[I].Alamat);
      cout<<endl;
   }
}

void Cetak(Mhs DatMhs[], int N)
{
	for(int I = 0 ; I <= N-1 ; I++)
   {
   	cout<<"N B I  = "<<DatMhs[I].NBI<<endl;
   	cout<<"Nama   = "<<DatMhs[I].Nama<<endl;
   	cout<<"Alamat = "<<DatMhs[I].Alamat<<endl;
      cout<<endl;
   }
}


int main()
{
	int N;
   Mhs DatMhs[100];
   cout<<"Banyaknya Data = ";
   cin>>N;
   Input_Data(DatMhs,N);

   Cetak(DatMhs,N);

}
