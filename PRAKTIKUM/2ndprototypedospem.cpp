#include<iostream>

using namespace std;

struct mhs
{
    int NBI;
    string nama;
    string alamat;
    int nilaiTeori;
    int nilaiPraktikum;
    float finalGrade;
};

const int maxJumlah=100;
mhs daftarmhs[maxJumlah];
int jumlahMhs;

float nilaiAkhir(int nilaiTeori, int nilaiPraktikum)
{
    float nilaiAkhir = (0.7 * nilaiTeori) + (0.3 * nilaiPraktikum);
    return nilaiAkhir;
}

int main()
{
    bool isTrue=true;
    int choice;

    do
    {
        cout<<"\n\n=======STUDENTS LIST=======\n"
            <<"1. Input Mahasiswa\n"
            <<"2. Tampilkan Data Mahasiswa Reguler\n"
            <<"4. Tampilkan Data semua Mahasiswa\n"
            <<"5. Exit Program\n";
        cout<<"=======CHOOSE AN OPTION=======\n";
        cin>>choice;

        switch(choice)
        {
            case 1:
            cout<<"Masukan Jumlah Mahasiswa : ";
            cin>>jumlahMhs;

            for (int i=1; i<=jumlahMhs; i++)
            {
                cout<<"Input data Mahasiswa ke-"<<i<<endl;
                cout << "Masukan NBI: ";
                cin >>daftarmhs[i].NBI;
                cout << "Masukan Nama: ";
                cin.ignore();
                getline(cin, daftarmhs[i].nama);
                cout << "Masukan Alamat: ";
                getline(cin, daftarmhs[i].alamat);
                cout<<"Nilai teori: ";
                cin>>daftarmhs[i].nilaiTeori;
                cout<<"Nilai praktikum: ";
                cin>>daftarmhs[i].nilaiPraktikum;
            }
            break;

            case 2:
            for(int i=1; i <= jumlahMhs; i++)
            {
                cout<<"------------------------------\n";
                cout<<"Data Mahasiswa ke-"<<i<<endl;
                cout<<"NBI: "<<daftarmhs[i].NBI<<endl;
                cout<<"Nama: "<<daftarmhs[i].nama<<endl;
                cout<<"Alamat: "<<daftarmhs[i].alamat<<endl;
                cout<<"Nilai Teori: "<<daftarmhs[i].nilaiTeori<<endl;
                cout<<"Nilai Praktikum: "<<nilaiAkhir(daftarmhs[i].nilaiTeori, daftarmhs[i].nilaiPraktikum);
                if(nilaiAkhir(daftarmhs[i].nilaiTeori, daftarmhs[i].nilaiPraktikum)>45)
                {

                }
            }
            break;

            case 3:
            break;
        }


    }while(isTrue!=false);

}