#include <iostream>

using namespace std;

int main()
{
	int N;
	bool Prima;
	cout<<"Masukkan Batas Deret = ";
	cin>>N;
	for(int I=1 ; I<=N ; I++)
	{
		Prima=1;
		if(I==1 || I==2)
		{
			Prima=1;
		}
		else
		{
			for(int J=2 ; J<=I-1 ; J++)
			{
				if(I % J==0)
				{
					Prima=0;
				}
			}
		}
		if(Prima==1)
			cout<<I<<"  ";
	}
}
