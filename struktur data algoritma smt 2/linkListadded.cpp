#include<iostream>

using namespace std;

struct Buku{
    string judul, pengarang;
    int tahunTerbit, harga;

    Buku *next;
};

Buku *head, *tail, *cur, *newNode, *del;

void editFirst(string judul, string pengarang, int tB, int harga)
{
    head->judul= judul;
    head->pengarang= pengarang;
    head->tahunTerbit= tB;
    head->harga= harga;
}

void editLast(string judul, string pengarang, int tB, int harga)
{
    tail->judul= judul;
    tail->pengarang= pengarang;
    tail->tahunTerbit= tB;
    tail->harga= harga;
}

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

void addFirst(string judul, string pengarang, int tB, int harga)
{
    newNode = new Buku();
    newNode->judul = judul;
    newNode->pengarang = pengarang;
    newNode->tahunTerbit = tB;
    newNode->harga = harga;
    newNode->next = head;
    head=newNode;
}

void addLast(string judul, string pengarang, int tB, int harga)
{
    newNode = new Buku();
    newNode->judul = judul;
    newNode->pengarang = pengarang;
    newNode->tahunTerbit = tB;
    newNode->harga = harga;
    newNode->next = NULL;
    tail->next = newNode;
    tail = newNode;
}

void removeFirst()
{
    del = head;
    head = head->next;
    delete del;
}

void removeLast()
{
    del = tail;
    cur = head;
   while(cur->next!= tail)
   {
       cur = cur->next;
   }
   tail = cur;
   tail->next = NULL;
   delete tail;
}

void output()
{
     cur = head;
    while(cur != NULL)
    {
        cout<<"Judul Buku Node : " <<cur->judul<<endl;
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

    cout<<endl;

    addFirst("Neymar. JR", "Antoine Griezmann", 2020, 1500000);
    output();

    cout<<endl;

    addFirst("Juan Luca Pablo", "Antoine Griezmann", 2020, 1500000);
    output();

    cout<<endl;

    addLast("Le Goat", "Lionel Andres Messi",2023, 99999999);
    output();

    editFirst("Lo Siento", "Wely", 2022, 20);
    output();

    editLast("La Bandito", "Wily", 2022, 20);
    output();

    removeFirst();
    output();

    removeLast();
    output();
}
