#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Roti {
    string nama;
    int kode;
    int tgl_produksi;
    int tgl_kadaluarsa;
    int harga_satuan;
    int stok;
};

struct Transaksi {
    string nama_pembeli;
    int kode_roti;
    int jumlah_roti;
    int harga_satuan;
    int jumlah_harga;
};

void entry_data(vector<Roti>& roti_list) {
    Roti roti;
    cout << "Masukkan kode roti: ";
    cin >> roti.kode;
    cout << "Masukkan nama roti: ";
    cin >> roti.nama;
    cout << "Masukkan tgl produksi: ";
    cin >> roti.tgl_produksi;
    cout << "Masukkan tgl kadaluarsa: ";
    cin >> roti.tgl_kadaluarsa;
    cout << "Masukkan harga satuan: ";
    cin >> roti.harga_satuan;
    cout << "Masukkan stok: ";
    cin >> roti.stok;

    roti_list.push_back(roti);
}

void lihat_data(const vector<Roti>& roti_list) {
    cout << "No. | Kode | Nama | Tgl Produksi | Tgl Kadaluarsa | Harga Satuan | Stok" << endl;
    for (int i = 0; i < roti_list.size(); i++) {
        cout << i+1 << ". | " << roti_list[i].kode << " | " << roti_list[i].nama << " | " << roti_list[i].tgl_produksi << " | " << roti_list[i].tgl_kadaluarsa << " | " << roti_list[i].harga_satuan << " | " << roti_list[i].stok << endl;
    }
}

void transaksi_penjualan(vector<Roti>& roti_list, vector<Transaksi>& transaksi_list) {
    // TODO: Implementasi transaksi penjualan
}

void laporan_keuangan(const vector<Roti>& roti_list, const vector<Transaksi>& transaksi_list) {
    // TODO: Implementasi laporan keuangan
}


int main() {
    vector<Roti> roti_list;
    vector<Transaksi> transaksi_list;

    int menu;
    while (true) {
        cout << "Menu Utama" << endl;
        cout << "1. Entry data roti" << endl;
        cout << "2. Lihat data stok" << endl;
        cout << "3. Transaksi Penjualan" << endl;
        cout << "4. Laporan keuangan" << endl;
        cout << "5. Keluar program" << endl;
        cout << "Masukkan pilihan: ";
        cin >> menu;

        switch (menu) {
            case 1:
                entry_data(roti_list);
                break;
            case 2:
                lihat_data(roti_list);
                
                break;
            case 3:
                transaksi_penjualan(roti_list, transaksi_list);
                system("cls");
                break;
            case 4:
                laporan_keuangan(roti_list, transaksi_list);
                
                break;
            case 5:
                return 0;
            default:
                cout << "Pilihan tidak valid!" << endl;
                break;
        }
    }

    return 0;
}