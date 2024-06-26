#include <iostream>

using namespace std;

int main()
{
    int N;
    bool Prima;
    cout<<"Masukan Batas Deret= ";
    cin>>N;
    for(int i = 1 ;i <= N; i++)
    {
        Prima = 1;
        if(i==1 || i==2)
        {
            Prima=1;
        }
        else
        {
            for (int j = 2; j<=i-1; j++)
            {
                if(i%j ==0 )
                {
                    Prima=0;
                }
            }
        }
        if(Prima)
        cout<<i << "  ";
    } 
  
}