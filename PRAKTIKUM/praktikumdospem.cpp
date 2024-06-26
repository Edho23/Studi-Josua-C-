#include <iostream> 

using namespace std;

struct mhs
{
    int NBI;
    string nama;
    string alamat;
    int nilaiTeori;
    int nilaiPraktikum;
};

const int maxJumlah=100;
mhs daftarmhs[maxJumlah];
int jumlahMhs;

void inputMhs()
{
    cout<<"Masukan Jumlah Mahasiswa : ";
    cin>>jumlahMhs;

    for (int i=1; i<=jumlahMhs; i++)
    {
        cout<<"\n\nInput data Mahasiswa ke-"<<i<<endl;
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
}

float nilaiAkhir(int nilaiTeori, int nilaiPraktikum)
{
    float nilaiAkhir = (0.7 * nilaiTeori) + (0.3 * nilaiPraktikum);
    return nilaiAkhir;
}

void showMhs()
{
    for(int i=1; i <= jumlahMhs; i++)
    {
        cout<<"\n------------------------------\n";
        cout<<"Data Mahasiswa ke-"<<i<<endl;
        cout<<"NBI: "<<daftarmhs[i].NBI<<endl;
        cout<<"Nama: "<<daftarmhs[i].nama<<endl;
        cout<<"Alamat: "<<daftarmhs[i].alamat<<endl;
        cout<<"Nilai Teori: "<<daftarmhs[i].nilaiTeori<<endl;
        cout<<"Nilai Praktikum: "<<daftarmhs[i].nilaiPraktikum<<endl;
    }
    
}

void passed()
{

    for(int i=1; i <= jumlahMhs; i++)
    {
        cout<<"\n------------------------------\n";
        cout<<"Data Mahasiswa ke-"<<i<<endl;
        cout<<"NBI: "<<daftarmhs[i].NBI<<endl;
        cout<<"Nama: "<<daftarmhs[i].nama<<endl;
        cout<<"Alamat: "<<daftarmhs[i].alamat<<endl;
        cout<<"Nilai Teori: "<<daftarmhs[i].nilaiTeori<<endl;
        cout<<"Nilai Praktikum: "<<daftarmhs[i].nilaiPraktikum<<endl;
        cout<<"Nilai Akhir: "<<nilaiAkhir(daftarmhs[i].nilaiTeori, daftarmhs[i].nilaiPraktikum)<<endl;;
        if(nilaiAkhir(daftarmhs[i].nilaiTeori, daftarmhs[i].nilaiPraktikum)>45)
        {
            cout<<"Selamat, anda dinyatakan lusus!";
        } else {
            cout<<"Maaf, anda dinyatakan tidak lulus."<<endl;
        }
    }
}

int main()
{
    int choice;
    bool isTrue=true;

    do
    {
        cout<<"\n\n=======MENU=======\n"
            <<"1. Input Mahasiswa\n"
            <<"2. Tampilkan Data Mahasiswa\n"
            <<"3. Tampilkan Data Mahasiswa lulus/tidak\n"
            <<"4. Exit Program\n";
        cout<<"=======CHOOSE AN OPTION=======\n";
        cin>>choice;

        switch(choice)
        {
            case 1:
            inputMhs();
            break;

            case 2:
            showMhs();
            break;

            case 3:
            passed();
            break;

            case 4:
            isTrue = false;
            system("cls");
            cout<<"Program telah berakhir.\nPress any key to continue...";
            break;
        }
    }while(isTrue!=false);
}