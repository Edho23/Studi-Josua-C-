#include <iostream>
using namespace std;

int main()
{
    int arrX[]={19, 24, 28, 35, 70, 89, 95};
    int j=sizeof(arrX)/sizeof(*arrX);

    cout<<"X : ";
    for(int i=0; i<j; i++)
    {
        cout<<arrX[i]<<" ";
    }

    int low = 0;
    int high = j - 1;
    int x;
    int foundIndex= false;

    cout<<"\nEnter the element to be searched : ";
    cin>>x;
    while (low <= high)
    {
        
        int mid = (low + high) / 2;
        
        if(arrX[mid]==x)
        {
            foundIndex = mid;
        }
        if(arrX[mid] < x)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }

    }
    if(foundIndex!=false)
    {
        cout<<"\nElement found at index : "<<foundIndex;

    }
    else
    {
        cout<<"\nElement not found";
    }
}