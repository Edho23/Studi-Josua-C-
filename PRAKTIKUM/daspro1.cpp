#include <iostream>
#include <string.h>

using namespace std;
int main() 
{
    string nameMhs;
    int nilaiMTK;
    int nilaiFisika;
    int nilaiKimia;
    float averageMatkul;

    cout<<"Enter your name : ";
    cin>>nameMhs;
    cout<<endl;
    

    cout<<"Enter your Math score : ";
    cin>>nilaiMTK; 
    cout<<endl;


    cout<<"Enter your Physic score : ";
    cin>>nilaiFisika;
    cout<<endl;


    cout<<"Enter your Chemistry score : ";
    cin>>nilaiKimia;
    cout<<endl;
    
    averageMatkul = (nilaiMTK + nilaiFisika + nilaiKimia) /3 ;
    cout<<"Selamat mahasiswa dengan nama "<<nameMhs << ", Lulus dengan nilai rata-rata : " << averageMatkul <<endl;
    
    return 0;
}
    