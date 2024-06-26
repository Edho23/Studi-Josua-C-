#include <iostream>
#include <conio.h>

using namespace std;

void CariTerbesar(int N, int &Max)
{
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
}

int main()
{
	int N,T;
   cout<<"Banyaknya Data = ";
   cin>>N;
   clrscr();
   CariTerbesar(N,T);
   cout<<"Terbesar = "<<T<<endl;
   getch();
}
