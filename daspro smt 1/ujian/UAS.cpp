#include <iostream>

using namespace std;

struct mobil
{
    string nama;
    string merk;
    string noPol;
    string hargaSewa;
    string jenis;
};

const int maxJumlah=100;
mobil car[maxJumlah];
int jumlahMobil;

void inputData()
{
    cout<<"MASUKAN JUMLAH DATA MOBIL : ";
    cin>>jumlahMobil;

    cout<<"--------INPUT DATA MOBIL--------";
    if(jumlahMobil>0)
    {
    
    for(int i=1; i<=jumlahMobil; i++)
    {
        cout<<"\nDATA MOBIL KE-"<<i<<endl;
        cout<<"NAMA MOBIL : ";
        cin.ignore();
        getline(cin, car[i].nama);
        cout<<"MERK : ";
        cin.ignore();
        getline(cin, car[i].merk);
        cout<<"NOMOR POLISI : ";
        cin.ignore();
        getline(cin,car[i].noPol);
        cout<<"JENIS MOBIL : ";
        cin.ignore();
        getline(cin, car[i].jenis);
        cout<<"HARGA SEWA (Rp.) : ";
        cin.ignore();
        getline(cin, car[i].hargaSewa);
    }
    } else
    {
        cout<<"BANYAK DATA HARUS DI ATAS 'O'!";
    }
    
}

void displayData()
{
    for(int i=1; i<jumlahMobil; i++)
    {
        for(int j=i+1; j<=jumlahMobil; j++)
        {
            if(car[i].merk > car[j].merk)
            {
                mobil temp = car[i];
                car[i] = car[j];
                car[j] = temp;
            }
        }
    }
    cout<<"DISPLAYING DATA\n";
    for(int i=1; i<=jumlahMobil; i++)
    {
        cout<<"\nDATA MOBIL KE-"<<i<<endl;
        cout<<"NAMA MOBIL   : "<< car[i].nama <<endl;
        cout<<"MERK         : "<< car[i].merk <<endl;
        cout<<"NOMOR POLISI : "<< car[i].noPol <<endl;
        cout<<"JENIS MOBIL  : "<< car[i].jenis <<endl;
        cout<<"HARGA SEWA   : "<< car[i].hargaSewa <<endl;
    }
}
int main()
{
    int choice;
    bool isTrue=true;

    do
    {
        cout<<"\n--------WELCOME TO OUR SHOP--------\n";
        cout<<"1. INPUT DATA\n"
            <<"2. SHOW DATA\n"
            <<"3. EXIT PROGRAM\n";
        cout<<"--------CHOOSE AN OPTION--------\n";
        cin>>choice;

        switch(choice)
        {
            case 1:
            inputData();
            break;

            case 2:
            displayData();
            break;

            case 3:
            isTrue=false;
            system("cls");
            cout<<"\nTHANKYOU FOR USING OUR PROGRAM....\n";
            cout<<"PRESS ANY KEY TO CONTINUE.....";
            break;
        }
    }while(isTrue!=false);
}