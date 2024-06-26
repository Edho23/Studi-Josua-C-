#include <iostream>

using namespace std;

int main()
{
	int Baris;
	cout<<"Masukkan Jumlah Baris = ";
	cin>>Baris;
	for(int I=1 ; I<=Baris ; I++)
	{
		for(int J=1 ; J<=I ; J++)
		{
			cout<<'*';
		}
		cout<<endl;
	}
}
