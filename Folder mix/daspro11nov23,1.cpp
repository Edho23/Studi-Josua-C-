#include <iostream>
#include <conio.h>

using namespace std;

int perhitunganPangkat (int Pangkat, int Bil)
{
    int Hasil=1;
    for(int i=1;i<=Pangkat;i++) 
    {
        Hasil = Hasil*Bil;
    }
    return Hasil;
}

int main()
{
    int Hasil=1, Bil, Pangkat;
    cout<<"Masukan Bilangan = ";
    cin>>Bil;
    cout<<"Masukan Pangkat = ";
    cin>>Pangkat;
    Hasil=perhitunganPangkat(Pangkat, Bil);
    cout<<Bil<<" Pangkat "<<Pangkat<<" = "<<Hasil<<endl;
    getch();
}