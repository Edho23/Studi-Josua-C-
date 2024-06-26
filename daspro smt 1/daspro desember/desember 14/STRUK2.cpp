#include <iostream>

using namespace std;

struct Titik
{
	int X;
	int Y;
};

struct PersegiPanjang
{
	Titik KiriAtas;
	Titik KananAtas;
	Titik KiriBawah;
	Titik KananBawah;
};


int main()
{
   PersegiPanjang PP;
   PP.KiriAtas.X=5;
   PP.KiriAtas.Y=5;
   PP.KananAtas.X=35;
   PP.KananAtas.Y=5;
   PP.KiriBawah.X=15;
   PP.KiriBawah.Y=5;
   PP.KananBawah.X=35;
   PP.KananBawah.Y=15;

   cout<<"Titik Sudut Persegi Panjang"<<endl;
   cout<<PP.KiriAtas.X<<" , "<<PP.KiriAtas.Y<<endl;
   cout<<PP.KananAtas.X<<" , "<<PP.KananAtas.Y<<endl;
   cout<<PP.KiriBawah.X<<" , "<<PP.KiriBawah.Y<<endl;
   cout<<PP.KananBawah.X<<" , "<<PP.KananBawah.Y<<endl;
  
}
