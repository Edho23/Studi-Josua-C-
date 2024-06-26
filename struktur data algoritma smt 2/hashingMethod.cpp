
#include "motherHash.h"

#include <iostream>

using namespace std;

int main()
{
    cout<<"======= Hash Table =======\n";
    cout<<"======= Data =======\n";

    motherHash* table = new motherHash(17);
    table->Input(new GameObject(1462300077, "1462300077"));
    
    table->Display();

    cout<<"\n======= Searching =======\n";

    GameObject* itemTofind;

    cout<<"Input Key : ";
    
    itemTofind = table->Find();

    if(itemTofind != NULL)
    {
        cout<<"Item Found!"<<endl;
    }else 
    {
        cout<<"Item Not Found!"<<endl;
    }

}