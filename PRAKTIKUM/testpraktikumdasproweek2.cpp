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
	
    int nilaiMtk;
	int choice;
	
	int genap;
	int banyakGenap;
	bool isTrue=true;
	
	
	do
	{
		
		cout<<"======WELCOME======\n"
			<<"1.Nilai bilangan\n"
			<<"2.Bilangan Genap\n"
			<<"3.Nilai MTK\n"
            <<"4.Finish\n";
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
            do 
            {
                cout<<"Input Nilai Mtk anda : ";
                cin >>nilaiMtk;

                if (nilaiMtk>90)
                {
                    cout<<"Selamat anda lulus matematika dengan sangat baik dengan nilai : "<<nilaiMtk<<endl;
                } else if (90>=nilaiMtk && nilaiMtk>83)
                {
                	cout<<"Selamat anda lulus matematika dengan memuaskan dengan nilai : "<<nilaiMtk<<endl;
                } else if (83>=nilaiMtk && nilaiMtk>78)
                {
                    cout<<"Selamat anda lulus matematika dengan baik dengan nilai : "<<nilaiMtk<<endl;
                } else 
				{
					cout<<"Mohon maaf anda belum lulus ujian karena nilai anda di bawah 78 dengan nilai : "<<nilaiMtk<<endl;
				}
            cout<<"\nWant to re-input?(y/n)";
			cin>>sui;
            } while (sui=='y');
            break;


		case 4:
			cout<<"Thanks for using us";
			isTrue=false;
			break;
		
		
		
		
	    } 
	
	
	
	
	}while(isTrue!=false);
}
