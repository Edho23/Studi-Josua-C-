#include <iostream>

using namespace std;

int main()
{
    string name;
    cout<<"Enter your name: ";
   getline(cin,name);
   

    cout<< name << "\n\nmemiliki alamat di: " << &name<<endl;

    string *pointerName = &name;

    cout<<"pointerName: "<<pointerName<<endl;
    cout<<"*pointerName: "<<*pointerName<<endl; 

    *pointerName = "Lewandowski";
    cout<<"\npointerName: "<<name<<endl;
    cout<<"*pointerName: "<<*pointerName<<endl;
    cout<<"alamat: "<<pointerName<<endl;
    cout<<endl;

    int value = 6;
    cout<< value << " memiliki alamat di: " << &value<<endl;

    int *ptrV = &value;
    cout<<"alamat: "<<ptrV<<endl;
    cout<<"Isi variable: "<<value<<endl;

    *ptrV +=5;
    cout<<"\nIsi variable: "<<value<<endl;
    cout<<"alamat: "<<ptrV<<endl;
}