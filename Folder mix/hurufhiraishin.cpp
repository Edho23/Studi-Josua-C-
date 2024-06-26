#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char Str[50];
    char Kar;
    cout << "Kata kata hari ini mas bro : ";
    gets(Str);
    cout<<"Huruf yang dihilangkan mas bro : ";
    cin>>Kar;
    cout<<"Hasilnya mas broo : ";
    for(int i=0; i<=strlen(Str)-1; i++)
    {
        if (Str[i]!=Kar)
        {
            cout<<Str[i];
        }
    }

}