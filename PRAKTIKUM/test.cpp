#include <iostream>

using namespace std;
int main() 
{
    string name;
    int nilaiMTK, nilaiFisika, nilaiKimia;
    int choice;
    float rata;
    bool isTrue=true;

    cout<<"Enter your name : ";
    cin>>name;
    do{
    cout<<"\n-----Wecome Mr."<<name<<"-----\n"
        <<"1. nilai MTK\n"
        <<"2. nilai Fisika\n"
        <<"3. nilai Kimia\n"
        <<"4. rata-rata\n"
        <<"5. CLOSE\n";
    cout<<"-----chose a number-----\n";
    cin>>choice;
    cout<<endl;




    switch(choice)
    {
        case 1:
            cout << "Enter your math score : ";
            cin >> nilaiMTK;
            break;
        
        case 2:
            cout << "Enter your Physic score : ";
            cin>>nilaiFisika;
            break;
        
        case 3:
            cout << "Enter your Chemistry score : ";
            cin>>nilaiKimia;    
            break;

        case 4:
            rata=(nilaiMTK + nilaiFisika + nilaiKimia)/3;
            cout<<"Your average score : "<<rata;
            break;
        
        case 5:
            cout<<"Thankyou for using us Mr."<<name<<endl;
            isTrue = false;
            break;
            
        
    }
    }while (isTrue!= false);
    return 0;
}
    