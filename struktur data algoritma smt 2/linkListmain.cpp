#include<iostream>

using namespace std;

struct Buku{
    string judul, pengarang;
    int tahunTerbit, harga;

    Buku *next;
};

int main()
{
    Buku *node1, *node2, *node3;
    
    node1 = new Buku;
    node2 = new Buku;
    node3 = new Buku;

    node1->judul= "Lionel Messi";
    node1->pengarang = "Cristiano Ronaldo";
    node1->tahunTerbit = 2024;
    node1->harga = 1000000;
    node1->next = node3;

    node2->judul= "Zinedine Zidane";
    node2->pengarang = "Francisco Ferreira";
    node2->tahunTerbit = 2018;
    node2->harga = 750000;
    node2->next = NULL;

    node3->judul= "Neymar Jr.";
    node3->pengarang = "David Luiz";
    node3->tahunTerbit = 2016;
    node3->harga = 950000;
    node3->next = node2;

    Buku *cur;
    cur = node1;
    while(cur != NULL)
    {
        cout<<"Judul Buku Node 1: " <<cur->judul<<endl;
        cout<<"Pengarang Buku:" << cur->pengarang<<endl;
        cout<<"Tahun Terbit Buku:" << cur->tahunTerbit<<endl;
        cout<<"Harga Buku:" << cur->harga<<endl;
        cout<<endl;

        cur = cur->next;
    }
}