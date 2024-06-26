#include <iostream>

using namespace std;


struct Tgl
{
	int Tanggal;
	int Bulan;
	int Tahun;
};


struct Mhs
{
	char NBI[10];
   char Nama[50];
   Tgl TglLahir;
};

int main()
{
	Mhs DatMhs;  // DatMhs adalah variabel struktur MHs
   cout<<"N B I  = ";
   gets(DatMhs.NBI);
   cout<<"Nama   = ";
   gets(DatMhs.Nama);
   cout<<"Tanggal = ";
   cin>>DatMhs.TglLahir.Tanggal;
   cout<<"Bulan = ";
   cin>>DatMhs.TglLahir.Bulan;
   cout<<"Tahun = ";
   cin>>DatMhs.TglLahir.Tahun;
 
   cout<<"Data Yang Dimasukkan "<<endl<<endl;
   cout<<"N B I  = "<<DatMhs.NBI<<endl;
   cout<<"Nama   = "<<DatMhs.Nama<<endl;
   cout<<"Tgl. Lahir = "<<DatMhs.TglLahir.Tanggal<<'-'
       <<DatMhs.TglLahir.Bulan<<'-'<<DatMhs.TglLahir.Tahun<<endl;
  
}
