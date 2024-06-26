#include <iostream>

using namespace std;

int main()
{
    int N, Max, Bil, I;
    cout<< "masukan banyaknya bilangan = ";
    cin>>N;
    for(I=1 ; I<=N; I++)
    {
        cout<< "Bilangan ke "<<I<<"=";
        cin>>Bil;
        if(I==1)
            Max=Bil;
        else if(Max<Bil)
            Max=Bil;
    }
    cout<<"bilangan terbesar = "<<Max<<endl;
}