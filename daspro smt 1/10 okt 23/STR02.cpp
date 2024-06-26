// String

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main()
{
	char Str1[100]="SURABAYA";
   char Str2[100];

   //Str2=Str1;  //Tidak Diperbolehkan

   strcpy(Str2,Str1);
   cout<<"Str1 = "<<Str1<<endl;
   cout<<"Str2 = "<<Str2<<endl;
   cout<<"Panjang String Str1 = "<<strlen(Str1)<<endl;
   cout<<"Str1 Terbalik = "<<strrev(Str1)<<endl;
   strlwr(Str2);
   cout<<"Str2 = "<<Str2<<endl;
   strupr(Str2);
   cout<<"Str2 = "<<Str2<<endl;
	getch();
}
