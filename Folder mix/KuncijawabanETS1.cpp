#include <iostream>

using namespace std;

int main()
{
	int N=15,Bil=1,BilKe=1,Negatif=0;
	cout<<"Banyaknya Bilangan = ";
	cin>>N;
	while(BilKe<=N)
	{
		if(Negatif)
		   cout<<(0-Bil)<<"  ";
		else
		   cout<<" "<<Bil<<"  ";
		BilKe++;
		if(Negatif)
		{
			Negatif=0;
			Bil++;
		}
		else
		{
			Negatif=1;
		}
	}
}
