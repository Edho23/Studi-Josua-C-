#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Struktur untuk menyimpan informasi buku
struct Buku {
    int nomor;
    char judul[50];
    char pengarang[50];
    char penerbit[50];
};

// Fungsi untuk memasukkan data buku
void inputData(struct Buku *buku) {
    printf("Nomor Buku: ");
    scanf("%d", &buku->nomor);

    printf("Judul Buku: ");
    scanf("%s", buku->judul);

    printf("Pengarang: ");
    scanf("%s", buku->pengarang);

    printf("Penerbit: ");
    scanf("%s", buku->penerbit);
}

// Fungsi untuk menampilkan data buku (diurutkan berdasarkan judul)
void displayData(struct Buku *buku, int jumlahBuku) {
    // Menggunakan algoritma bubble sort untuk mengurutkan berdasarkan judul buku
    for (int i = 0; i < jumlahBuku - 1; i++) {
        for (int j = 0; j < jumlahBuku - i - 1; j++) {
            if (strcmp(buku[j].judul, buku[j + 1].judul) > 0) {
                // Menukar elemen jika urutannya tidak benar
                struct Buku temp = buku[j];
                buku[j] = buku[j + 1];
                buku[j + 1] = temp;
            }
        }
    }

    // Menampilkan data setelah diurutkan
    printf("\nData Buku (Diurutkan berdasarkan judul):\n");
    printf("-------------------------------------------------\n");
    printf("%-10s %-30s %-20s %-20s\n", "Nomor", "Judul", "Pengarang", "Penerbit");
    printf("-------------------------------------------------\n");

    for (int i = 0; i < jumlahBuku; i++) {
        printf("%-10d %-30s %-20s %-20s\n", buku[i].nomor, buku[i].judul, buku[i].pengarang, buku[i].penerbit);
    }
}

int main() {
    int pilihan, jumlahBuku = 0;
    struct Buku *buku;

    printf("Masukkan jumlah buku: ");
    scanf("%d", &jumlahBuku);

    // Mengalokasikan memori untuk array buku
    buku = (struct Buku *)malloc(jumlahBuku * sizeof(struct Buku));

    do {
        printf("\nMenu:\n");
        printf("1. Input Data\n");
        printf("2. Display Data (Urut Judul)\n");
        printf("3. Keluar\n");
        printf("Pilih menu: ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                // Memasukkan data buku
                inputData(&buku[jumlahBuku]);
                jumlahBuku++;
                break;

            case 2:
                // Menampilkan data buku (diurutkan berdasarkan judul)
                displayData(buku, jumlahBuku);
                break;

            case 3:
                // Keluar dari program
                printf("Program selesai.\n");
                break;

            default:
                printf("Pilihan tidak valid. Silakan coba lagi.\n");
        }
    } while (pilihan != 3);

    // Melepaskan memori yang dialokasikan
    free(buku);

    return 0;
}