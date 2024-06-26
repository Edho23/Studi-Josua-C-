// Fungsi String

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main()
{
	char Str1[100]="PEMROGRAMAN";
   char Str2[100]="LANJUT";

   cout<<"SEBELUM DIGABUNG "<<endl;
   cout<<"Str1 = "<<Str1<<endl;
   cout<<"Str2 = "<<Str2<<endl;
   cout<<endl<<"SESUDAH DIGABUNG "<<endl;
   strcat(Str1,Str2);
   cout<<"Str1 = "<<Str1<<endl;
   cout<<"Str2 = "<<Str2<<endl;
	getch();
}
