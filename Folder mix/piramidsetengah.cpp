#include <iostream>
#include "emoji.h"


using namespace std;

int main()
{
    int Baris;
    cout<<"Masukan Jumlah Baris=";
    cin>>Baris;

    for(int i=1; i<=Baris; i++)
    {
        for (int j = 1; j <=i ; ++j)
        {
            cout << "🗿" ;
        }
        cout << endl;
    }
}