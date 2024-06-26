#include <iostream>

using namespace std;

int hitungDeret(int N)
{
    if(N==1)
    {
    return 1;
    }
    else 
    {
        return(hitungDeret(N-1)+N);
    }
}

int main()
{
    int Total=0, N;
    
    cout<<"Masukan Batas Deret : ";
    cin>> N;
    cout<<hitungDeret(N);

}