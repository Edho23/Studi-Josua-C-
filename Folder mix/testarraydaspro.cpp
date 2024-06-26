#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int array[2][3]=
    {{1,2,3},
     {4,5,6}};

    for(int i=0; i < 5; i++)
    {
        cout<<array[i]<<endl;
    }
}