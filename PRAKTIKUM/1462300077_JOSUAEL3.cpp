#include <iostream>

using namespace std;

void pointerA(double a)
{

	double* aPtr = &a;
	
	cout<<"Bilangan pertama : "<< a <<endl;
	cout<<"Addres dari bilangan : "<< aPtr;
}

void pointerB(int b, int *bPtr)
{
	cout<<"Bilangan pertama : "<< b <<endl;
	cout<<"Addres dari bilangan : "<< bPtr;
}


void pengurangan(int a, int b)
{
	int hasil;
	do
	{
		cout<<"\nMasukan angka pertama : ";
		cin >> a ;
	
		cout<<"\nMasukan angka kedua : " ;
		cin>> b ;
	
		hasil=a-b;
		if (hasil>-1)
		{
			cout<< hasil << endl;
		} else 
		{
			cout<<"ERROR";
		}
		
		cout<<"\nUlangi program!!!";
		
	} while (hasil<-1);
}

int main()
{
	int bilangan1, bilangan2;
	
	pengurangan(bilangan1 , bilangan2);
	
	pointerA(bilangan1);
}
