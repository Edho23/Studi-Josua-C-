#include <iostream>

using namespace std;

int main()
{
    int jam, menit, detik;
    cout << "Masukkan Jam : "; 
    cin >> jam;
    cout << "masukan menit : ";
    cin>>menit;
    detik = (jam*3600)+(menit*60);
    cout<<"detik = "<<detik;
}