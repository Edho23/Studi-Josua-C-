#include<iostream>

using namespace std;

struct Buku{
    string judul, pengarang;
    int tahunTerbit, harga;

    Buku *next;
};

Buku *head, *tail, *cur;

void singleLinklist(string judul, string pengarang, int tB, int harga)
{
    head = new Buku();
    head->judul = judul;
    head->pengarang = pengarang;
    head->tahunTerbit = tB;
    head->harga = harga;
    head->next = NULL;
    tail=head;
}

void output()
{
     cur = head;
    while(cur != NULL)
    {
        cout<<"Judul Buku Node 1: " <<cur->judul<<endl;
        cout<<"Pengarang Buku: " << cur->pengarang<<endl;
        cout<<"Tahun Terbit Buku: " << cur->tahunTerbit<<endl;
        cout<<"Harga Buku: " << cur->harga<<endl;
        cout<<endl;

        cur = cur->next;
    }
}

int main()
{
    singleLinklist("Lionel Messi", "Cristiano Ronaldo", 2024, 2000000);
    output();
}
