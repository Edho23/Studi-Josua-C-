#include <iostream>

using namespace std;

int faktorial(int bilangan)
{
    if (bilangan <= 1)
    {
        return bilangan;
    } else 
        {
            return bilangan * faktorial(bilangan-1);
        }
}

int rumusPermutasi(int n, int r)
{
    int x, hasil;
    if (n>1)
    {
        x = n-r;
        hasil= faktorial(n)/faktorial(x);
    } else
        {
            cout<<"#####___ERROR!___#####";
        }
    return hasil;
}


int main()
{
    int bilanganN, bilanganR;

    cout<<"\n-----PERMUTASI(faktoiral)-----\n";
    cout<<"nPr = n!/(n-r)!";
    cout<<"\nMasukan nilai N : ";
    cin>> bilanganN;

    cout<<"\nMasukan nilai R : ";
    cin>> bilanganR;

    cout<<"Hasil dari permutasi "<< bilanganN<< " dengan " << bilanganR <<" adalah : " << rumusPermutasi(bilanganN, bilanganR)<<endl;
}