#include <iostream>

using namespace std;

int main()
{
    int N;
    bool Prima;
    char yes;
    
    
    do
    {
        cout<<"Lu olang sini input N value = ";
        cin>>N;

    for(int i = 2 ;i <= N; i++)
    {
        Prima = 2;
        if(i==2)
        {
            Prima=2;
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
    cout<<"\nLu olang ingin mengulang kah?(y/t)"<<endl;
    cin>>yes;
    
    } while(yes=='y' || yes=='Y');
    cout<<"Terimakasih telah menggunakan kami!";
    
    return 0;
}