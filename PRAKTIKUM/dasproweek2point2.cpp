#include <iostream>

using namespace std;

int main()
{
    int banyakN;
    int bil[20];

    cout<<"Input banyak bilangan : ";
    cin>> banyakN;
    cout<<"==========================\n";
    cout<<endl;

    for (int i=0; i<banyakN; i++)
    {
        cout << "Masukkan Bilangan ke-" << i+1<<" :"<<" ";
        cin >> bil[i];
    }
    cout<<"\n==========================";

    for (int i=0; i<banyakN; i++)
    {
        cout<<"\nnilai ke-" <<i+1<<" :"<<bil[i];
    }
    return 0;
}