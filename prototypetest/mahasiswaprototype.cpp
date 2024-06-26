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
        cout<<"\nMasukan Data Mahasiswa ke-"<<i<<endl;
        cout<<"NBI : "; cin >> daftarMhs[i].NBI;
        cout<<"Nama : ";
        cin.ignore(); 
        getline(cin, daftarMhs[i].nama);
        cout<<"Jurusan : "; 
        getline(cin, daftarMhs[i].jurusan);
        cout<<"Gender (L/P) : ";
        cin >> daftarMhs[i].kelamin;
        cout<<"Tanggal Lahir [dd/mm/yyyy] : "; 
        cin.ignore();
        getline(cin, daftarMhs[i].tglLahir);
        cout<<"Kelas(REGULER/NON REGULER) : "; 
        getline(cin, daftarMhs[i].kelas);
    }
}


bool compareNBI(const mhs &a, const mhs &b) {
    return a.NBI < b.NBI;
}

bool compareNBIreguler(const mhs &a, const mhs &b) {
    return a.NBI < b.NBI;
}

bool compareNBInonreguler(const mhs &a, const mhs &b) {
    return a.NBI < b.NBI;
}
void tampilkanMhs()
{
    cout << "=======ALL STUDENTS LIST======= : \n";
    for(int i=1; i<=jumlahMhs; i++)
    {
        sort(daftarMhs+1, daftarMhs + jumlahMhs+1, compareNBI);
        cout <<"\nData Mahasiswa ke-"<<i<<endl;
        cout<<"NBI : "; cout<< daftarMhs[i].NBI<<endl;
        cout<<"Nama : "; cout<<daftarMhs[i].nama<<endl;
        cout<<"Jurusan : "; cout<<daftarMhs[i].jurusan<<endl;
        cout<<"Gender (L/P) : "; cout<<daftarMhs[i].kelamin<<endl;
        cout<<"Tanggal Lahir [dd/mm/yyyy] : "; cout<<daftarMhs[i].tglLahir<<endl;
        cout<<"Kelas(REGULER/NON REGULER) : "; cout<<daftarMhs[i].kelas<<endl;
    }
}

void tampilkanR()
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
            cout<<"Gender (L/P) : "; cout<<daftarMhs[i].kelamin<<endl;
            cout<<"Tanggal Lahir [dd/mm/yyyy] : "; cout<<daftarMhs[i].tglLahir<<endl;
            cout<<"Kelas(REGULER/NON REGULER) : "; cout<<daftarMhs[i].kelas<<endl;
        }
    }
        
}

void tampilkanNR()
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
            cout<<"Gender (L/P) : "; cout<<daftarMhs[i].kelamin<<endl;
            cout<<"Tanggal Lahir [dd/mm/yyyy] : "; cout<<daftarMhs[i].tglLahir<<endl;
            cout<<"Kelas(REGULER/NON REGULER) : "; cout<<daftarMhs[i].kelas<<endl;
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
            <<"4. Tampilkan Data semua Mahasiswa\n"
            <<"5. Exit Program\n";
        cout<<"=======CHOOSE AN OPTION=======\n";
        cin>>choice;

        switch(choice)
        {
            case 1:
                inputMhs();
                break;
            
            case 2:
                tampilkanR();
                break;

            case 3:
                tampilkanNR();
                break;

            case 4:
                tampilkanMhs();
                break;
            
            case 5:
                cout<<"Thankyou for using the program";
                isTrue=false;
                break;

        } 
    } while (isTrue!=false);
}