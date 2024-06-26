#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main()
{
	char Str[100];
 	cout<<"Masukkan String = ";
   gets(Str);
   for(int I=strlen(Str)-1; I>=0 ; I--)
   {
   	for(int J=0 ; J<=I ; J++)
      {
         cout<<Str[J];
      }
      cout<<endl;
   }
   getch();
}
