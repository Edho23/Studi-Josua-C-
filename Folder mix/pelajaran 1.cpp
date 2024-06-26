#include <iostream>

using namespace std;
int main()
{
    int jam, menit, detik, sisa;
    cout<<"Masukkan detik : ";
    cin>>detik ;
    jam = detik/3600;
    menit= (detik%3600)/60;
    sisa= detik%60;
    cout<<"jam = "<<jam<<endl;
    cout<<"menit = "<<menit<<endl;
    cout<<"sisa = "<<sisa<<endl;

}
