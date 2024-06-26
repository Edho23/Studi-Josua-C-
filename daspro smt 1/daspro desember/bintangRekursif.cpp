#include <iostream>
#include "emoji.h"


using namespace std;

int piramidHalf(int N)
{
    if(N==0)
    {
        return 0;
    }
    else 
    {
        int stars = 0;
        stars += piramidHalf(N-1);
        for(int i=1; i<=N; i++)
        {
            cout << "*" ;
            stars++; 
        }
        cout<<endl;
        return stars;
    }
}


int main()
{
    int Baris;
    cout<<"Masukan Jumlah Baris=";
    cin>>Baris;
    piramidHalf(Baris);
}