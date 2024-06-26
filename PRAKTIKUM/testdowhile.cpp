#include <iostream>

using namespace std;

int main()
{
    int choice, N, genap, bilPerpangkatan;
    bool Prima;
    char Yes, urName[100];
    bool istrue=true;

    cout<<"Enter Your Name : ";
    cin>>urName;



    do
    {
        cout<<"\n-----Welcome to the program Mr."<<urName<<"-----\n"
        <<"1. Bilangan Prima\n"
        <<"2. Bilangan Genap\n"
        <<"3. Perpangkatan\n"
        <<"4. Finish\n";
    cout<<"-----Choose an Option-----\n";
    cin>>choice;

    switch(choice)
    {
        case 1:
        do
        {
        cout<<"Input N value my Bro : ";
        cin>>N;


        for(int i = 1 ;i <= N; i++)
        {
        Prima = 1;
        if(i==1 || i==2)
        {
            Prima=1;
        }
        else
        {
            for (int j = 2; j<=i-1; j++)
            {
                if(i%j ==0 )
                {
                    Prima=0;
                }
            }
        }
        if(Prima)
        cout<<i << "  ";
        }
        cout<<"Do you want to re-Input N value?(y/n)\n";
        cin>>Yes;
        } while(Yes=='Y' || Yes=='y');
        cout<<endl;
        break;

        case 2:
        do
        {
        cout<<"Input banyak bilangan yang diinginkan : ";
        cin>>genap;

        cout<<"Bilangan genap dari "<<genap<<" adalh : ";
        for (int i = 2; i <= genap; i += 2) 
        {
        cout << i << " ";
        }
        
        cout<<"\n Do you want to re-input? (y/n): \n";
        cin>>Yes;

        } while(Yes=='y');
        cout<<endl;
        break;




        case 3:
        do
        {
        int Hasil=1;
        int Pangkat;
        cout<<"Input bilangan yang lu olang inginkan : ";
        cin>>bilPerpangkatan;

        cout<<"Input pangkat yang lu olang inginkan : ";
        cin>>Pangkat;

        
        for(int i=1;i<Pangkat;i++) 
        {
        Hasil = Hasil*bilPerpangkatan;
        }
        cout<<bilPerpangkatan<<" pangkat "<<Pangkat<<" : "<<Hasil;
        cout<<endl;

        cout<<"Do you want to re-input? (y/n):\n";
        cin>>Yes;

        } while(Yes=='y'||Yes=='Y');
         break;


        case 4:
        cout<<"Have a nice day!";
        istrue = false;
        cout<<endl;
        break;
    }
    }while(istrue!=false);

    
        
        
}