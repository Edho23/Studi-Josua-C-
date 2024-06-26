#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Struktur data untuk menyimpan informasi praktikum
struct PraktikumData {
    string nama;
    string nbi;
    float nilaiPendahuluan;
    float nilaiPraktikum;
    float nilaiAkhir;
};

// Fungsi untuk menambahkan data praktikum
void tambahData(vector<PraktikumData>& dataPraktikum) {
    PraktikumData data;
    cout << "Masukkan Nama: ";
    getline(cin, data.nama);
    cout << "Masukkan NBI: ";
    getline(cin, data.nbi);
    cout << "Masukkan Nilai Pendahuluan: ";
    cin >> data.nilaiPendahuluan;
    cout << "Masukkan Nilai Praktikum: ";
    cin >> data.nilaiPraktikum;
    data.nilaiAkhir = (data.nilaiPendahuluan + data.nilaiPraktikum) / 2;

    // Menambahkan data ke vektor
    dataPraktikum.push_back(data);
    cout << "Data berhasil ditambahkan." << endl;
}

// Fungsi untuk menampilkan data praktikum
void tampilkanData(const vector<PraktikumData>& dataPraktikum) {
    if (dataPraktikum.empty()) {
        cout << "Data praktikum kosong." << endl;
    } else {
        cout << "===== Data Praktikum =====" << endl;
        for (const PraktikumData& data : dataPraktikum) {
            cout << "Nama: " << data.nama << endl;
            cout << "NBI: " << data.nbi << endl;
            cout << "Nilai Pendahuluan: " << data.nilaiPendahuluan << endl;
            cout << "Nilai Praktikum: " << data.nilaiPraktikum << endl;
            cout << "Nilai Akhir: " << data.nilaiAkhir << endl;
            cout << "--------------------------" << endl;
        }
    }
}

// Fungsi untuk mengubah data praktikum berdasarkan NBI
void ubahData(vector<PraktikumData>& dataPraktikum, const string& nbi) {
    bool ditemukan = false;
    for (PraktikumData& data : dataPraktikum) {
        if (data.nbi == nbi) {
            cout << "Masukkan Nilai Pendahuluan baru: ";
            cin >> data.nilaiPendahuluan;
            cout << "Masukkan Nilai Praktikum baru: ";
            cin >> data.nilaiPraktikum;
            data.nilaiAkhir = (data.nilaiPendahuluan + data.nilaiPraktikum) / 2;
            cout << "Data berhasil diubah." << endl;
            ditemukan = true;
            break;
        }
    }

    if (!ditemukan) {
        cout << "Data dengan NBI " << nbi << " tidak ditemukan." << endl;
    }
}

// Fungsi untuk menghapus data praktikum berdasarkan NBI
void hapusData(vector<PraktikumData>& dataPraktikum, const string& nbi) {
    auto iter = remove_if(dataPraktikum.begin(), dataPraktikum.end(),
                          [nbi](const PraktikumData& data) { return data.nbi == nbi; });

    if (iter != dataPraktikum.end()) {
        dataPraktikum.erase(iter, dataPraktikum.end());
        cout << "Data berhasil dihapus." << endl;
    } else {
        cout << "Data dengan NBI " << nbi << " tidak ditemukan." << endl;
    }
}

int main() {
    vector<PraktikumData> dataPraktikum;
    int pilihan;
    string nbi;

    do {
        cout << "===== Menu =====" << endl;
        cout << "1. Tambah Data" << endl;
        cout << "2. Tampilkan Data" << endl;
        cout << "3. Ubah Data" << endl;
        cout << "4. Hapus Data" << endl;
        cout << "0. Keluar" << endl;
        cout << "Pilih menu (0-4): ";
        cin >> pilihan;
        cin.ignore(); // Membersihkan buffer input

        switch (pilihan) {
            case 1:
                tambahData(dataPraktikum);
                break;
            case 2:
                tampilkanData(dataPraktikum);
                break;
            case 3:
                cout << "Masukkan NBI untuk mengubah data: ";
                getline(cin, nbi);
                ubahData(dataPraktikum, nbi);
                break;
            case 4:
                cout << "Masukkan NBI untuk menghapus data: ";
                getline(cin, nbi);
                hapusData(dataPraktikum, nbi);
                break;
            case 0:
                cout << "Program selesai. Terima kasih!" << endl;
                break;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
        }

    } while (pilihan != 0);

    return 0;
}