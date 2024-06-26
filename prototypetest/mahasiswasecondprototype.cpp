#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

struct mhs
{
    int NBI=0;
    string nama;
    string jurusan;
    string tglLahir;
    string kelas;
    char kelamin;
};

const int maxJumlah=300;
mhs daftarMhs[maxJumlah];
int jumlahMhs;

void inputMhs()
{
  
    cout<<"Masukan jumalah mahasiswa : \n";
    cin>>jumlahMhs;
    for(int i=1; i <= jumlahMhs; i++)
    {
       cout <<"\nMasukan jumlah mahasiswa : ";
        cin >> jumlahMhs;
        for (int i = 1; i <= jumlahMhs; i++) 
        {
            cout << "\nMasukan Data Mahasiswa ke-" << i << endl;
            cout << "NBI : "; cin >> daftarMhs[i].NBI;
            cout << "Nama : "; getline(cin, daftarMhs[i].nama);
            cout << "Jurusan : "; getline(cin, daftarMhs[i].jurusan);
            cout << "Tanggal Lahir [dd/mm/yyyy] : "; getline(cin, daftarMhs[i].tglLahir);
            cout << "Kelas(REGULER/NON REGULER) : "; getline(cin, daftarMhs[i].kelas);
        }
    }
}


bool compareNBIreguler(const mhs &a, const mhs &b) {
    return a.NBI < b.NBI;
}

bool compareNBInonreguler(const mhs &a, const mhs &b) {
    return a.NBI > b.NBI;
}


void showReguler()
{
    for(int i=1; i<=jumlahMhs; i++)
    {
        if(daftarMhs[i].kelas=="reguler" ||daftarMhs[i].kelas=="REGULER")
        {
            sort(daftarMhs+1, daftarMhs + jumlahMhs+1, compareNBIreguler);
            cout<<"\nData Mahasiswa ke-"<<i<<endl;
            cout<<"NBI : "; cout<< daftarMhs[i].NBI<<endl;
            cout<<"Nama : "; cout<<daftarMhs[i].nama<<endl;
            cout<<"Jurusan : "; cout<<daftarMhs[i].jurusan<<endl;
            cout<<"Tanggal Lahir [dd/mm/yyyy] : "; cout<<daftarMhs[i].tglLahir<<endl;
            cout<<"Kelas(REGULER/NON REGULER) : "; cout<<daftarMhs[i].kelas<<endl;
        }
    }
        
}

void showNonreguler()
{
    for(int i=1; i<=jumlahMhs; i++)
    {
        if(daftarMhs[i].kelas=="non reguler" ||daftarMhs[i].kelas=="NON REGULER")
        {
            sort(daftarMhs+1, daftarMhs + jumlahMhs+1, compareNBInonreguler);
            cout <<"\nData Mahasiswa ke-"<<i<<endl;
            cout<<"NBI : "; cout<< daftarMhs[i].NBI<<endl;
            cout<<"Nama : "; cout<<daftarMhs[i].nama<<endl;
            cout<<"Jurusan : "; cout<<daftarMhs[i].jurusan<<endl;
            cout<<"Tanggal Lahir [dd/mm/yyyy] : "; cout<<daftarMhs[i].tglLahir<<endl;
            cout<<"Kelas(R/NR) : "; cout<<daftarMhs[i].kelas<<endl;
        }
    }
        
}

int main()
{
    int choice;
    bool isTrue=true;

    do
    {
        cout<<"\n\n=======STUDENTS LIST=======\n"
            <<"1. Input Mahasiswa\n"
            <<"2. Tampilkan Data Mahasiswa Reguler\n"
            <<"3. Tampilkan Data Mahasiswa Non Reguler\n"
            <<"4. Exit Program\n";
        cout<<"=======CHOOSE AN OPTION=======\n";
        cin>>choice;

        switch(choice)
        {
            case 1:
                inputMhs();
                break;
            
            case 2:
                showReguler();
                break;

            case 3:
                showNonreguler();
                break;

            case 4:
                cout<<"Thankyou for using the program";
                isTrue=false;
                break;

        } 
    } while (isTrue!=false);
}