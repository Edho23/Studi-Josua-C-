#include <iostream>

using namespace std;


int faktorial(int bilangan)
{
    if (bilangan <= 1)
    {
        return bilangan;
    } else 
        {
            return bilangan *faktorial(bilangan-1);
        }
        
}

int permutasi(int n, int r)
{
    int x, hasil;

    if(n > r)
    {
         x = n - r;
        hasil = faktorial(n) / faktorial(x);
        cout<<hasil;
        
    } else 
        {
           cout<< "Error!";
        }
    return hasil;
}


int main()
{
    char yes;
    int angkaN, angkaR, hasilPermutasi;


    do
    {
         cout<<"----------PERMUTASI----------\n";
    cout<<"P(n,r)= n! / (n-r)!\n";
    cout<<"Input nilai faktorial n untuk di hitung : ";
    cin>>angkaN;

    cout<<"Input nilai faktorial r untuk di hitung : ";
    cin>>angkaR;

    cout<<"\nHasil dari permutasi faktorial "<<angkaN<< " dengan "<< angkaR <<" adalah : ";

    hasilPermutasi= permutasi(angkaN,angkaR);

    cout<<"\ndo you want to re-input?(y/n)";
    cin>>yes;
    } while(yes=='y'||yes=='Y');
   

    return 0;
}