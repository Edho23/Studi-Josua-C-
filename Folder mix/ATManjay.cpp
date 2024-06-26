#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <stdlib.h>
#include <string>

using namespace std;


int main()
{
    int pin;
    int password;
    int entry;
    string accName;
    double deposit=0.0;
    double balance=0.0;
    double withdraw=0.0;
    bool istrue= true;
    do
    {
    cout<<"\n--Welcome to Josiuu--\n";
    cout<<"Make an account:\n";

    cout<<"Enter your name: \n";
    cin>>accName;
    
    cout<<"Enter your Password: \n";
    cin>>password;

    cout<<"-----------------------------------\n\n";
    cout<<"Enter your Pin : ";
    cin>>pin;

    if(pin==password)
    {
        do
        {
            cout<<"------Welcome, nice to see you here------\n"
            <<"1. Deposit\n"
            <<"2. Withdraw\n"
            <<"3. Balance\n"
            <<"4. Logout\n";
        cout<<"------Choose an Option!------\n";
        cin>>entry;
        

        switch(entry)
        {
            case 1:
                system("cls");
                cout<<"Deposit amount : $ \n";
                cin>>deposit;
                balance= balance + deposit;
                break;
            case 2:
                system("cls");
                if(balance <=0)
                    cout<<"Money first dumbass! how u gonna withdraw if u aint got money?\n";
                else
                {
                cout<<"Withdraw amount : $ \n";
                cin>>withdraw;
                balance = balance - withdraw;
                }
                break;
                
            case 3:
                system("cls");
                cout<<"Current balance: \n$"<<balance<<endl;
                break;
            case 4:
                system("cls");
                cout << "Have a nice day!";
                istrue = false;
                break;
        }
        }while(istrue!=false); 
    }
    else
    {
        cout<<"Wrong PIN dumbass, try stealin' huh? \n";

    }
    }while(istrue!=false);

    

    
    return 0;
}
