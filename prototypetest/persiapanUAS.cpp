#include <iostream>

using namespace std;

struct mahasiswa
{
    string nama;
    int NBI;
    string alamat;
    int nilaiTeori;
    int nilaiPraktikum;
};

float perhitunganAkhir(int nilaiTeori, int nilaiPraktikum)
{
    float nilaiAkhir;
    nilaiAkhir = (0.7 * nilaiTeori) + (0.3 * nilaiPraktikum);
    return nilaiAkhir;
}

const int maxJumlah=100;
mahasiswa mhs[maxJumlah];
int jmlMahasiswa;


void inputMhs()
{
    cout<<"MASUKAN JUMLAH MAHASISWA YANG DI-INGINKAN : ";
    cin>>jmlMahasiswa;

    if(jmlMahasiswa>0)
    {
        for(int i=1; i<=jmlMahasiswa; i++)
        {
            cout<<"\nDATA MAHASISWA KE-"<<i<<endl;
            cout<<"NBI  : "; cin >> mhs[i].NBI;
            cout<<"NAMA : "; 
            cin.ignore();
            getline(cin, mhs[i].nama);
            cout<<"ALAMAT   : "; 
            cin.ignore();
            getline(cin,mhs[i].alamat);
            cout<<"NILAI TEORI : "; 
            cin >> mhs[i].nilaiTeori;
            cout<<"NILAI PRAKTIKUM : "; cin >> mhs[i].nilaiPraktikum;
        }
    } else
    {
        cout<<"JUMLAH MAHASISWA HARUS LEBIH DARI '0'!";
    } 
}


void lulus()
{
    for(int i=1; i<=jmlMahasiswa; i++)
    {
        if(perhitunganAkhir(mhs[i].nilaiTeori, mhs[i].nilaiPraktikum)>70)
        {
            cout<<"DATA MAHASISWA KE-"<<i<<" LULUS DENGAN NILAI "<< perhitunganAkhir(mhs[i].nilaiTeori, mhs[i].nilaiPraktikum)<<endl;
            cout<<"NAMA : " <<mhs[i].nama<<endl;
            cout<<"NIM  : "<<mhs[i].NBI<<endl;
            cout<<"ALAMAT   : "<<mhs[i].alamat<<endl;
            cout<<"NILAI TEORI : "<<mhs[i].nilaiTeori<<endl;
            cout<<"NILAI PRAKTIKUM : "<<mhs[i].nilaiPraktikum<<endl;
            cout<<"  ";
        }
    }
    
}

void notPassed()
{
    for(int i=1; i<=jmlMahasiswa; i++)
    {
        if(perhitunganAkhir(mhs[i].nilaiTeori, mhs[i].nilaiPraktikum)<45)
        {
            cout<<"DATA MAHASISWA KE-"<<i<<" MAAF, ANDA TIDAK LULUS DENGAN NILAI "<<perhitunganAkhir(mhs[i].nilaiTeori, mhs[i].nilaiPraktikum)<<endl;
            cout<<"NAMA : " <<mhs[i].nama<<endl;
            cout<<"NIM  : "<<mhs[i].NBI<<endl;
            cout<<"ALAMAT   : "<<mhs[i].alamat<<endl;
            cout<<"NILAI TEORI : "<<mhs[i].nilaiTeori<<endl;
            cout<<"NILAI PRAKTIKUM : "<<mhs[i].nilaiPraktikum<<endl;
            cout<<"  ";
        }
    }
    
}

void kelulusan()
{
    cout<<"\n------------DATA MAHASISWA YANG LULUS/TIDAK LULUS------------\n";
    for(int i=1; i <= jmlMahasiswa; i++)
    {
        cout<<"DATA MAHASISWA KE-"<<i<<endl;
        cout<<"NAMA : " <<mhs[i].nama<<endl;
        cout<<"NIM  : "<<mhs[i].NBI<<endl;
        cout<<"ALAMAT   : "<<mhs[i].alamat<<endl;
        cout<<"NILAI TEORI : "<<mhs[i].nilaiTeori<<endl;
        cout<<"NILAI PRAKTIKUM : "<<mhs[i].nilaiPraktikum<<endl;
        cout<<"NILAI AKHIR : "<<perhitunganAkhir(mhs[i].nilaiTeori, mhs[i].nilaiPraktikum);
        if(perhitunganAkhir(mhs[i].nilaiTeori, mhs[i].nilaiPraktikum)>70)
        {
            cout<<"LULUS!"<<endl;
            cout<<"  ";
        } else 
        {
            cout<<"TIDAK LULUS."<<endl;
            cout<<"  ";
        }
    }
}

void showMhs()
{
    for(int i=1; i <= jmlMahasiswa; i++)
    {
        cout<<"\n----------------------------------------\n";
        cout<<"DATA MAHASISWA KE-"<<i<<endl;
        cout<<"NAMA : " <<mhs[i].nama<<" "<< &mhs[i].nama<<endl;
        cout<<"NIM  : "<<mhs[i].NBI<<" "<< &mhs[i].NBI<<endl;
        cout<<"ALAMAT   : "<<mhs[i].alamat<<" "<< &mhs[i].alamat<<endl;
        cout<<"NILAI TEORI : "<<mhs[i].nilaiTeori<<" "<< &mhs[i].nilaiTeori<<endl;
        cout<<"NILAI PRAKTIKUM : "<<mhs[i].nilaiPraktikum<<" "<< &mhs[i].nilaiPraktikum<<endl;
    }
}

void remove()
{
    int indexToDelete;
    cout << "Masukkan indeks barang yang ingin dihapus: ";
    cin >> indexToDelete;
    if (indexToDelete > 1 && indexToDelete <= jmlMahasiswa) 
    {
         for (int i = indexToDelete; i <= jmlMahasiswa; ++i) 
        {
            mhs[i] = mhs[i+1];
        
        --jmlMahasiswa;
        } 
    } else
    {
        cout<<"Index tidak Valid!"<<endl;
    }
}
int main()
{
    int choice;
    bool isTrue=true;

    do
    {
        cout<<"\n---------WELCOME---------\n"
            <<"1. Input Data"
            <<"\n2. Lihat Data"
            <<"\n3. Hapus Data"
            <<"\n4. Data lulus"
            <<"\n5. Data tidak lulus"
            <<"\n6. Perhitungan Akhir"
            <<"\n7. Keluar Program\n";
        cout<<"------------Masukkan pilihan------------\n";
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
            remove();
            break;

            case 4:
            lulus();
            break;

            case 5:
            notPassed();
            break;

            case 6:
            kelulusan();
            break;

            case 7:
            isTrue=false;
            system("cls");
            cout<<"\nTerima Kasih Telah Menggunakan Aplikasi Ini! \n";
            break;
        }
    }while(isTrue!=false);
}