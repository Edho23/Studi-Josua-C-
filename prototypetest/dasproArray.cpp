#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std;

void Inisialisasi(int ArrJum[50])
{
	for(int I=0 ; I<=49 ; I++)
	{
		ArrJum[I]=0;
	}
}

void HitungKar(char ArrKar[50], int ArrJum[50], char Str[50])
{
	char Kar;
	for(int I=0 ; I<=strlen(Str)-1; I++)
	{
		Kar=Str[I];
		int Posisi=0;
		int Ketemu=0;
		//Mencari Posisi Karakter
		while(ArrJum[Posisi] != 0 && Ketemu==0 )
		{
			if(Kar==ArrKar[Posisi])
			{
				Ketemu=1;
				ArrJum[Posisi]=ArrJum[Posisi]+1;
			}
			Posisi++;					   
		}
		if(!Ketemu)
		{
			ArrKar[Posisi]=Kar;
			ArrJum[Posisi]=1;
		}
	}
}

void Tampil(char ArrKar[50], int ArrJum[50])
{
	int I=0;
	while(ArrJum[I]>0)
	{
		cout<<"Karakter "<<ArrKar[I]<<" = "<<ArrJum[I]<<endl;
		I++;
	}
}



int main()
{
    char string[120];
    char ArrKar[120];
    int ArrJum[120];

    cout<<"Ketik sesuatu yang anda inginkan : ";
    cin.getline(string, 120);

    Inisialisasi(ArrJum);
	HitungKar(ArrKar,ArrJum,string);
	Tampil(ArrKar,ArrJum);
	getch();
}