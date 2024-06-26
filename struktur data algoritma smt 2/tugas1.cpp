//Josua Ekklesia Lokeswara
//1462300077

#include<iostream>

using namespace std;

int main() {
    int A, B, C, D, E;

    cout<<"Input Nilai A:";
    cin>>A;

    cout<<"Input Nilai B:";
    cin>>B;

    cout<<"Input Nilai C:";
    cin>>C;

    cout<<"Input Nilai D:";
    cin>>D;

    cout<<"Input Nilai E:";
    cin>>E;

    if(A>B && A>C && A>D && A>E) 
    {
        cout<<"Nilai Terbesar adalah: " << A;
    }
    else if (B>A && B>C && B>D &&  B>E)
    {
        cout<<"Nilai Terbesar adalah: " << B;
    }
    else if (C>A && C>B && C>D && C>E)
    {
        cout<<"Nilai Terbesar adalah: " << C;
    }
    else if (D>A && D>B && D>C && D>E)
    {
        cout<<"Nilai Terbesar adalah: " << D;
    }
    else if (E>A && E>B && E>C && E>D)
    {
        cout<<"Nilai Terbesar adalah: " << E;
    }
}