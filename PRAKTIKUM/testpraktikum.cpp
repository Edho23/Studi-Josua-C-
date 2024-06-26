#include <iostream>

using namespace std;

int main(){
    double angkaPertama;
    char karPertama;
    bool statusPertama;

    cout<<"masukan angka pertama : ";
    cin>>angkaPertama;

    cout<<"masukan karakter pertama : ";
    cin>>karPertama;

    cout<<"masukan status pertama : ";
    cin>>statusPertama;

    cout<<"angka pertama adalah "<<angkaPertama<<endl;
    cout<<"karakter pertama adalah "<<karPertama<<endl;
    if(statusPertama){
        cout<<"status pertama adalah true";
    }else{
        cout<<"status pertama adalah false";
    }
    return 0;
}