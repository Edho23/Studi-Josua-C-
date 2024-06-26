#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <dos.h>
#include "GTXY.h"


using namespace std;

void gotoxy(int x, int y);


int main()
{
	char Str[100];
 	cout<<"Masukkan String = ";
   gets(Str);
   for(int I=0 ; I<=strlen(Str)-1 ; I++)
   {
   	for(int J=50 ; J>=10+I ; J--)
      {
      	gotoxy(J,10);
         cout<<Str[I];
         //sleep(1);
         for(long int K=1 ; K<=50000000 ;  K++)
         {
         }
      	gotoxy(J,10);
         cout<<' ';
      }
      gotoxy(10+I,10);
      cout<<Str[I];

   }
   getch();
}
