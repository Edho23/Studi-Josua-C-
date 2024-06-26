#include <iostream>

using namespace std;

int main()
{
    int A, B;
    int choice;
    bool isTrue=true;

    cout<<"Input nilai A : ";
    cin>>A;

    cout<<"Input nilai B : ";
    cin>>B;
    


    do
    {
        cout<<"-----Welcome to Operator Logic system-----\n"
            <<"1. AND\n"
            <<"2. OR\n"
            <<"3. NOT\n"
            <<"4. CLOSE\n";
        cout<<"-----CHOOSE AN OPTION-----\n";
        cin>>choice;
            
        
        
        
        
        
        
        switch(choice)
        {
            case 1:
                if (A < 20 && B >= 10) 
                { 
                cout<<"true\n";
                } else {
                cout<<"false\n";
                }
                break;
            
            case 2:
                if ((A < 20 || B >= 10)) 
                { 
                cout<<"true\n";
                } else
                {cout<<"false\n";}
                break;
            
            case 3:
                if (!isTrue)
                {
                    cout<<"true\n";
                }else{
                    cout<<"false\n";
                }
                break;
            
            case 4:
                cout<<"Thankyou for using us!\n";
                isTrue=false;
                break;


        } 
    } while(isTrue!=false);
    return 0;
}
