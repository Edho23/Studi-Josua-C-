#include <iostream>

enum hari {SENIN, SELASA, RABU, KAMIS, JUMAT, SABTU, MINGGU};

int main() 
{
    enum hari sekarang;
    sekarang = RABU;
    printf("Sekarang hari ke-%d", sekarang );
}

