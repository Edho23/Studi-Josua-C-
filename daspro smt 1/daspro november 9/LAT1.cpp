#include <iostream>
#include <conio.h>

using namespace std;

int Terbesar(int N)
{
	int Max;
   int Bil;
   for(int I = 1 ; I<= N ; I++)
   {
   	cout<<"Bilangan Ke "<<I<<" = ";
      cin>>Bil;
      if(I==1)
      	Max=Bil;
      else
      {
      	if(Max < Bil)
         	Max=Bil;
      }
   }
  	return Max;
}

int main()
{
	int N,Max;
   cout<<"Banyaknya Data = ";
   cin>>N;
   clrscr();
   Max=Terbesar(N);
   cout<<"Terbesar = "<<Max<<endl;
   getch();
}
