// Menggambar Persegi Panjang

#include <iostream>
#include <stdio.h>

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
  cout<<"Kiri Atas"<<endl;
  cout<<"   X = ";
  cin>>PP.KiriAtas.X;
  cout<<"   Y = ";
  cin>>PP.KiriAtas.Y;
  cout<<endl;
  cout<<"Kanan Atas"<<endl;
  cout<<"   X = ";
  cin>>PP.KananAtas.X;
  PP.KananAtas.Y = PP.KiriAtas.Y;
  cout<<"   Y = "<<PP.KananAtas.Y<<endl;
  cout<<endl;
  cout<<"Kiri Bawah"<<endl;
  PP.KiriBawah.X = PP.KiriAtas.X;
  cout<<"   X = "<<PP.KiriBawah.X<<endl;
  cout<<"   Y = ";
  cin>>PP.KiriBawah.Y;
  cout<<endl;
  cout<<endl;
  cout<<"Kanan Bawah"<<endl;
  PP.KananBawah.X = PP.KananAtas.X;
  PP.KananBawah.Y = PP.KiriBawah.Y;
  cout<<"   X = "<<PP.KananBawah.X<<endl;
  cout<<"   Y = "<<PP.KananBawah.Y<<endl;



  // Pojok Kiri Atas
  gotoxy(PP.KiriAtas.X,PP.KiriAtas.Y);cout<<char(218);

  // Garis dari Kiri Atas ke Kanan Atas
  for(int I = PP.KiriAtas.X+1 ; I <= PP.KananAtas.X-1;I++)
  {
      gotoxy(I,PP.KananAtas.Y);cout<<char(196);
  }

  // Pojok Kanan Atas
  gotoxy(PP.KananAtas.X,PP.KananAtas.Y);cout<<char(191);

  // Garis Kanan Atas ke Kanan Bawah
  for(int I = PP.KananAtas.Y+1 ; I <= PP.KananBawah.Y-1 ; I++)
  {
  		gotoxy(PP.KananAtas.X,I);cout<<char(179);
  }

  // Pojok Kanan Bawah
  gotoxy(PP.KananBawah.X,PP.KananBawah.Y);cout<<char(217);

  // Garis Kanan Bawah ke Kiri Bawah
  for(int I = PP.KananBawah.X-1 ; I >= PP.KiriBawah.X+1 ; I--)
  {
  		gotoxy(I,PP.KiriBawah.Y);cout<<char(196);
  }

  // Pojok Kiri Bawah
  gotoxy(PP.KiriBawah.X,PP.KiriBawah.Y);cout<<char(192);

  // Garis Kiri Bawah ke Kiri Atas
  for(int I = PP.KiriBawah.Y-1 ; I >= PP.KiriAtas.Y+1 ; I--)
  {
  		gotoxy(PP.KiriAtas.X,I);cout<<char(179);
  }

}
