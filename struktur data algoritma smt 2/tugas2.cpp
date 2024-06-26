//Josua Ekklesia Lokeswara
//1462300077

#include<iostream>

using namespace std;

class Bilangan
{
private:
    int A, B, C, D, E;

public:
    void Input()
    {
    cout<<"Input Nilai A : ";
    cin>>A;
    cout<<"Input Nilai B : "; 
    cin>>B;
    cout<<"Input Nilai C : ";
    cin>>C;
    cout<<"Input Nilai D : ";
    cin>>D;
    cout<<"Input Nilai E : ";
    cin>>E;
    }

    void  Output()
    {
        int Biggest = A;
        if(B>Biggest) Biggest=B;
        if(C>Biggest) Biggest=C;
        if(D>Biggest) Biggest=D;
        if(E>Biggest) Biggest=E;
        
        cout<<"\nNilai dari bilangan terbesar adalah : " <<Biggest;
    }
};
int main() 
{
    Bilangan X;
    X.Input();
    X.Output();

    return 0;
}