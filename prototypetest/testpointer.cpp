#include <iostream>

using namespace std;

void pointer (int bilA, int *aPtr)
{
    cout<<"\nBilangan yang di Inputkan : "<<bilA<<endl;
    cout<<"\nNilai Bilangan yang di Inputkan : "<< aPtr <<endl;
}

int main()
{
    int bilangan1;
    int *aPtr=nullptr;
    aPtr = &bilangan1;

    cout<<"\n-----MEMORY_ADDRESS-----\n";
    cout<<"Input bilangan : ";
    cin>> bilangan1;

    cout<<"\n---------------------\n";
    pointer(bilangan1,aPtr);
    
    return 0;
}