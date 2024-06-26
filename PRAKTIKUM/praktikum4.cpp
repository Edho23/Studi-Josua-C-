#include <iostream>
#include <string>

using namespace std;

struct gudang 
{
    string nama;
    float kode;
    float harga;
    
};

const int maxJumlah=100;
gudang stock[maxJumlah];
int jumlahBarang;

void inputBarang()
{
    cout<<"Masukan Jumlah barang : ";
    cin>>jumlahBarang;

    for (int i=1; i<=jumlahBarang; i++)
    {
        cout<<"\nMasukan Data Barang ke-"<<i<<endl;
        cout<<"Nama Barang :";
        cin.ignore();
        getline(cin,stock[i].nama);

        cout<<"Kode Barang : ";
        cin>>stock[i].kode;
        while (stock[i].kode<1)
        {
            cout<<"Maaf Kode tidak boleh kurang dari 1!"<<endl;
            cout<<"Masukkan Ulang Kode Barang : ";
            cin>>stock[i].kode;
            }
        cout<<"Harga barang : ";
        cin>>stock[i].harga;
        while (stock[i].harga<1)
        {
            cout<<"Maaf Harga harus di atas 1!"<<endl;
            cout<<"Masukkan ulang harga barang : ";
            cin>>stock[i].harga;
            }
    }
}

void ubahData()
{
    int indexToModify;
    			cout << "Masukkan indeks barang yang akan diubah: ";
    			cin >> indexToModify;

   				if (indexToModify >= 1 && indexToModify <= jumlahBarang) {
        			cout << "Masukkan Nama Barang : ";
        			cin.ignore();
        			getline(cin, stock[indexToModify].nama);
        			cout << "Masukan Kode Baru : ";
        			cin >> stock[indexToModify].kode;
        			cout << "Harga : ";
        			cin >> stock[indexToModify].harga;
    			} else {
        			cout << "Indeks tidak valid.\n";
    			}
}

void tampilkanBarang()
{
    cout<<"\n==========TAMPILAN BARANG==========\n";
    for (int i=1; i<=jumlahBarang; i++)
    {
        cout<<"\nNama Barang : "<<stock[i].nama<<endl;
        cout<<"Kode Barang : "<<stock[i].kode<<endl;
        cout<<"Harga barang : "<<stock[i].harga<<endl;
    }
}

void hapusBarang()
{
    int indexToDelete;
    cout << "Masukkan indeks barang yang ingin dihapus: ";
    cin >> indexToDelete;
    if (indexToDelete > 1 && indexToDelete <= jumlahBarang) 
    {

        for (int i = indexToDelete; i <= jumlahBarang; ++i) 
        {
            stock[i] = stock[i+1];
        
        --jumlahBarang;
        } 
    } else 
        {
            cout << "Index tidak valid." << endl;
        }
            
}

int main()
{
    int choice;
    bool yes=true;

    do
    {
        cout<<"\n\n=======STUDENTS LIST=======\n"
            <<"1. Input barang\n"
            <<"2. Tampilkan Data Barang\n"
            <<"3. Ubah data barang\n"
            <<"4. Hapus data barang\n"
            <<"0. Exit Program\n";
        cout<<"=======CHOOSE AN OPTION=======\n";
        cin>>choice;

        switch(choice)
        {
            case 1:
                inputBarang();
                break;
            
            case 2:
                tampilkanBarang();
                break;
                
            case 3:
                ubahData();
                break;
            
            case 4:
                hapusBarang();
                break;

            case 0:
                cout<<"Thankyou for using the program";
                yes=false;
                break;

        } 
    } while (yes!=false);
}