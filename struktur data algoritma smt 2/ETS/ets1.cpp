#include<iostream>
using namespace std;

int main()
{
    int x[10];
    int j= sizeof(x)/sizeof(*x);
    
    cout<<"Masukkan nilai array x: "<<endl;
    for(int i=0;i<j;i++)
    {
        cin>>x[i];
    }
    

    for(int a=0; a < j; a++)
    {
        int temp=x[a];
        int pos=a;
        for(int b=a; b < j; b++)
        {
            if(x[b]<temp)
            {
                temp=x[b];
                pos=b;
            }
        }
        x[pos]=x[a];
        x[a]=temp;

        cout<<endl;
        cout<<a<< " : ";
        for(int c=0;c<j;c++)
        {
            cout<<x[c]<<" ";
        }
         
    }
    cout<<endl;
    cout<<endl;

    cout<<"Hasil Akhir : ";
    for(int z=0;z<j;z++)
    {
        cout<<x[z]<<" ";
    }

}