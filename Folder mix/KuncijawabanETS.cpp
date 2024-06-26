#include <iostream>

using namespace std;

int main()
{
	int Tinggi,Spasi=0;
	cout<<"Tinggi Segitiga (Minimal 3) = ";
	cin>>Tinggi;
	for(int I=(2*Tinggi-1) ; I>=1 ; I=I-2)
	{
		for(int J=1 ; J<=Spasi ; J++)
		{
		   cout<<' ';
	    }
		for(int K=1 ; K<=I ; K++)
		{
		   cout<<'*';
	    }  
		Spasi++;
		cout<<endl;
	}
}
