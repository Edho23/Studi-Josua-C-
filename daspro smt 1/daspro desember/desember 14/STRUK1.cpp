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
	Mhs DatMhs;  // DatMhs adalah variabel struktur MHs
   cout<<"N B I  = ";
   gets(DatMhs.NBI);
   cout<<"Nama   = ";
   gets(DatMhs.Nama);
   cout<<"Alamat = ";
   gets(DatMhs.Alamat);

   cout<<"Data Yang Dimasukkan "<<endl<<endl;
   cout<<"N B I  = "<<DatMhs.NBI<<endl;
   cout<<"Nama   = "<<DatMhs.Nama<<endl;
   cout<<"Alamat = "<<DatMhs.Alamat<<endl;
 
}
