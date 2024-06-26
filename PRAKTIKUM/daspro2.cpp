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

    cout<<"-----OPERASI ARITMATIKA-----\n";
    cout<<"-----------------------------\n";
    cout<<"Penjumlahan A + B = "<< A + B<<endl;
    cout<<"Pengurangan A - B = "<<A - B<<endl;
    cout<<"Perkalian A * B = "<<A * B<<endl;
    cout<<"Pembagian A : B = "<<A / B<<endl;
    cout<<"A modulus B = "<<A % B<<endl;

    cout<<"\n-----OPERASI RELASI-----\n";
    cout<<"---------------------------\n";
    cout<<"Relasi A > B = "<< (A > B)<<endl;
    cout<<"Relasi A < B = "<<(A < B)<<endl;
    cout<<"Relasi A >= B = "<<(A >= B)<<endl;
    cout<<"Relasi A <= B : "<<(A <= B)<<endl;
    cout<<"Relasi A ==B : "<<(A == B)<<endl;
    cout<<"Relasi A != B : "<< (A!=B)<<endl;

    return 0;
}