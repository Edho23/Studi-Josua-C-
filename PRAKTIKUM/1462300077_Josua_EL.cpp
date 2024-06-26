//josua el
//1462300077


#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	int banyakN;
	int U[20];
	bool prima;
	char sui;
	
	int choice;
	
	int genap;
	int banyakGenap;
	bool isTrue=true;
	
	
	do
	{
		
		cout<<"======WELCOME======\n"
			<<"1.Nilai bilangan\n"
			<<"2.Bilangan Genap\n"
			<<"3.Finish\n";
		cout<<"======CHOOSE OPTION=====\n";
		cin>>choice;
		
		
		switch(choice)
		{
		
		case 1:
			do
			{
				cout<<"Input banyak bilangan : ";
			cin>>banyakN;
			cout<<"=========================\n";
		
			for(int i=0; i<banyakN; i++)
			{
			cout<<"Input bilangan ke-"<<i+1<<" : ";
			cin>>U[i];
			}
		
		
			for(int i=0; i<banyakN; i++)
			{
			cout<<"Nilai Bilangan ke- "<<i+1 <<" : "<<U[i]<<endl;
			}
			cout<<"Want to re-input?(y/n)";
			cin>> sui;
			cout<<endl;
			}while (sui=='y');
			break;
		
		
		case 2:
			do
			{
				cout<<"Input angka untuk bil genap : ";
			cin>>banyakGenap;
			for(int i=1; i<=banyakGenap; i++)
			{
				if(i%2==0)
				{
				cout<< i;
				} else 
					{
					cout<<" ";
					}
			}
			cout<<"\nWant to re-input?(y/n)";
			cin>>sui;
			} while (sui=='y');
			break;
		
		
		case 3:
			"Thanks for using us";
			isTrue=false;
			break;
		
		
		}
		
	} while(isTrue!=false);
	
	
	
	

}
