#include <iostream>
using namespace std;

int main()
{
    int x[]= {19, 25, 15, 10, 55, 30, 77};
    int j = sizeof(x)/sizeof(*x);
    int temp;

    cout<<"X: ";
    for(int i=0; i<j; i++)
    {
        cout<<x[i]<<" ";
    }
    cout<<endl;

    for(int i=0; i<j; i++)
    {
        int random=0;
        for(int k= 0; k < j-1; k++)
        {
            if(x[k]>x[k+1])
            {
                temp= x[k];
                x[k]= x[k+1];
                x[k+1]= temp;
                random++;
            }
        }
        
        if(random==0)
        {
            break;
        }

        cout << endl;
        cout<< "Test "<<i+1<< " : ";
        for(int a= 0; a < j; a++)
        {
            cout<<x[a]<<" ";
        }
    }

    cout<<endl;
    cout<<endl;
    cout<<"Hasil Akhir : ";
    for(int i=0; i<j; i++)
    {
        cout<<x[i]<<" ";
    }

}