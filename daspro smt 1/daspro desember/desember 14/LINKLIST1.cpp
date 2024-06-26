#include <iostream>

using namespace std;

struct Node
{
	int Data;
	Node *Next;
};

Node *PAwal, *PAkhir;

void BuatList(int Bil)
{
	Node *PBaru;
	PBaru = new (Node);
	PBaru->Data = Bil;
	PBaru->Next = NULL;
	if(PAwal==NULL) // Link List Masih Kosong
	{
		PAwal = PBaru;
		PAkhir = PBaru;
	}
	else //Link List Tidak Kosong
	{
		PAkhir->Next = PBaru;
		PAkhir = PBaru;
	}
}

void Display()
{
	Node *PNode;
	PNode=PAwal;
	while(PNode!=NULL)
	{
		cout<<PNode->Data<<endl;
		PNode=PNode->Next;
	}
}

int main()
{
	PAwal=NULL;
	PAkhir=NULL;
	BuatList(50);
	BuatList(20);
	BuatList(500);
	BuatList(200);
	BuatList(550);
	BuatList(220);
	BuatList(5000);
	BuatList(2000);
	BuatList(150);
	BuatList(120);
	Display();
 
}
