#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	char Str[50];
	char Kar;
	cout<<"Masukkan String = ";
	gets(Str);
	cout<<"Karakter yang dihilangkan = ";
	cin>>Kar;
	cout<<"Hasil = ";
	for(int I=0 ; I<=strlen(Str)-1 ; I++)
	{
		cout<<Str[I];
		if(Str[I]!=Kar)
		{
			cout<<Str[I];
		}
	}
}
