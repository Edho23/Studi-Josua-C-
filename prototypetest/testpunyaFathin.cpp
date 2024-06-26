#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// Struktur untuk menyimpan informasi mahasiswa
struct Mahasiswa {
    int NBI;
    string Nama;
    string TglLahir;
    string Jurusan;
    char JenisKelamin; // L = Laki-laki, P = Perempuan
};

// Fungsi untuk membandingkan NBI untuk sorting
bool compareNBI(const Mahasiswa &a, const Mahasiswa &b) {
    return a.NBI < b.NBI;
}

// Fungsi untuk membandingkan NBI secara terbalik untuk kelas non reguler
bool compareNBIDesc(const Mahasiswa &a, const Mahasiswa &b) {
    return a.NBI > b.NBI;
}

int main() {
    int jumlahMahasiswa;
    cout << "Masukkan jumlah mahasiswa: ";
    cin >> jumlahMahasiswa;

    vector<Mahasiswa> dataMahasiswa(jumlahMahasiswa);

    // Input data mahasiswa
    for (int i = 0; i < jumlahMahasiswa; ++i) {
        cout << "\nMasukkan data mahasiswa ke-" << i + 1 << ":" << endl;
        cout << "NBI: ";
        cin >> dataMahasiswa[i].NBI;
        cout << "Nama: ";
        cin.ignore(); // Membersihkan newline dari input sebelumnya
        getline(cin, dataMahasiswa[i].Nama);
        cout << "Tanggal Lahir (DD/MM/YYYY): ";
        getline(cin, dataMahasiswa[i].TglLahir);
        cout << "Jurusan: ";
        getline(cin, dataMahasiswa[i].Jurusan);
        cout << "Jenis Kelamin (L/P): ";
        cin >> dataMahasiswa[i].JenisKelamin;
    }

    // Memilih kelas untuk sorting berdasarkan NBI
    char kelas;
    cout << "\nPilih kelas (R untuk reguler, N untuk non-reguler): ";
    cin >> kelas;

    // Sorting berdasarkan NBI sesuai dengan kelas
    if (kelas == 'R' || kelas == 'r') {
        sort(dataMahasiswa.begin(), dataMahasiswa.end(), compareNBI);
    } else if (kelas == 'N' || kelas == 'n') {
        sort(dataMahasiswa.begin(), dataMahasiswa.end(), compareNBIDesc);
    } else {
        cout << "Kelas tidak valid." << endl;
        return 1;
    }

    // Menampilkan data mahasiswa
    cout << "\nData Mahasiswa:" << endl;
    for (const Mahasiswa &mhs : dataMahasiswa) {
        cout << "NBI: " << mhs.NBI << endl;
        cout << "Nama: " << mhs.Nama << endl;
        cout << "Tanggal Lahir: " << mhs.TglLahir << endl;
        cout << "Jurusan: " << mhs.Jurusan << endl;
        cout << "Jenis Kelamin: " << mhs.JenisKelamin << endl << endl;
    }

    return 0;
}