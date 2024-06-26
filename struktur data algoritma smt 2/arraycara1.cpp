#include<iostream>
using namespace std;

int main()
{
    int x[]={77, 25, 15, 10, 55, 30, 19};
    int j= sizeof(x)/sizeof(*x);
    
    int temp, pos;

    cout<<"X : ";
    for(int i=0;i<j;i++)
    {
        cout<<x[i]<<" ";
    }
    cout<<endl;

    //sorting array menggunakan selection sort

    for(int a=0; a < j; a++)
    {
        int random=0;
         temp=x[a];
         pos=a;
         for(int b=a; b < j; b++)
         {
            if(x[b]<temp)
            {
                temp=x[b];
                pos=b;
                random++;
            }
         }
         if(random==0)
         {
            break;
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