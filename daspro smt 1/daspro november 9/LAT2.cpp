#include <iostream>
#include <conio.h>

using namespace std;

void CetakDeret(int N, int M)
{
	for(int I=1 ; I<=N ; I++)
   {
   	cout<<I*M<<"  ";
   }
}

int main()
{
	int N,M;
   cout<<"Banyaknya Bilangan = ";
   cin>>N;
   cout<<"Kelipatan Bilangan = ";
   cin>>M;
   cout<<endl;
   CetakDeret(N,M);
   getch();
}
