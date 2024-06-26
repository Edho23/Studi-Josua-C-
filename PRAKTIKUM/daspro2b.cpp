#include <iostream>

using namespace std;

int main()
{
    int A, B;
    
    
    cout<<"Please input a number for A: ";
    cin>> A;

    cout<<"Please input a number for B: ";
    cin>>B;
    cout<<" "<<endl;

    cout<<"Relasi A > B = "<< (A > B);
    cout<<"Relasi A < B = "<<(A < B);
    cout<<"Relasi A >= B = "<<(A >= B);
    cout<<"Relasi A <= B : "<<(A <= B);
    cout<<"Relasi A ==B : "<<(A == B);
    cout<<"Relasi A != B : "<< (A!=B);

    return 0;
}