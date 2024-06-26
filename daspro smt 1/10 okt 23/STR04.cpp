
#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main()
{
	char Str1[100]="AAAAA";
   char Str2[100]="AAAAA";
   cout<<strcmp(Str1,Str2)<<endl;

   strcpy(Str1,"ADBBB");
   strcpy(Str2,"ABDDD");
   cout<<strcmp(Str1,Str2)<<endl;

   strcpy(Str1,"ABBBB");
   strcpy(Str2,"ADDDD");
   cout<<strcmp(Str1,Str2)<<endl;
	getch();
}
