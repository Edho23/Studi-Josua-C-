#include <iostream>
#include "emoji.h"


using namespace std;

void piramidHalf(int N)
{
    for(int i=1; i<=N; i++)
    {
        for (int j = 1; j <=i ; ++j)
        {
            cout << "_" ;
        }
        cout << endl;
    }
}


int main()
{
    int Baris;
    cout<<"Masukan Jumlah Baris=";
    cin>>Baris;
    piramidHalf(Baris);
}