#include <iostream>

using namespace std;

int main()
{
    int arrX[]={19, 25, 10, 7, 90, 100};
    int j= sizeof(arrX)/sizeof(*arrX);
    int x;

    cout<<"X : "<<endl;
    for (int i=0; i<j; i++)
    {
         cout<<"Index ke-"<<i<<" : "<<arrX[i]<<" "<<endl;
    }

    cout<<"\nEnter number to search : ";
    cin>>x;

    int flag = 0; 
    for (int i=0; i<j; i++)
    {
        if (arrX[i] == x)
        {
            cout<<"\nElement "<<x<<" is present at index "<<i;
            flag = 1;
            break;
        }
        
    }   
    if(!flag)
    {
        cout<<"\nElement "<<x<<" is not present in the array";
    }
        
}