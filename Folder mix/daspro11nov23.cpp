#include <iostream>
#include <conio.h> //untuk menampilkan getch()

using namespace std;

void perhitunganPangkat (int Pangkat, int Bil, int &Hasil)
{
    for(int i=1;i<Pangkat;i++) 
    {
        Hasil = Hasil*Bil;
    }
}

int main()
{
    int Hasil=1, Bil, Pangkat;
    cout<<"Masukan Bilangan = ";
    cin>>Bil;
    cout<<"Masukan Pangkat = ";
    cin>>Pangkat;
    perhitunganPangkat(Pangkat, Bil, Hasil);
    cout<<Bil<<" Pangkat "<<Pangkat<<" = "<<Hasil<<endl;
    getch();
}