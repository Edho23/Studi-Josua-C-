#include <iostream>

using namespace std;

struct Node
{
	int Bil;
   Node *Kiri;
   Node *Kanan;
};

Node *PAwal,*PAkhir;

void MakeList(int Bil)
{
	Node *NodeBaru, *PNode;
   bool Ketemu = 0;
   NodeBaru = new Node;
   NodeBaru->Bil=Bil;
   NodeBaru->Kiri=NULL;
   NodeBaru->Kanan=NULL;
   if(PAwal==NULL)
   {
   	//Link List Kosong
      PAwal=NodeBaru;
      PAkhir=NodeBaru;
   }
   else
   {
  		//List List Tidak Kosong
      if(Bil<=PAwal->Bil)
      {
      	//Penambahan di depan
         NodeBaru->Kanan=PAwal;
         PAwal->Kiri=NodeBaru;
         PAwal=NodeBaru;
      }
      else
      {
      	//Penambahan di tengah atau di belakang
         PNode=PAwal;
         //Mencari Posisi node yg baru
         while(!Ketemu && PNode !=NULL)
         {
            if(Bil <= PNode->Bil)
            {
            	//Posisi Node sudah ditemukan
               Ketemu=1;
            }
            else
            	PNode=PNode->Kanan;
        }
        if(Ketemu)
        {
        		//Penambahan di tengah
            NodeBaru->Kanan = PNode;
            NodeBaru->Kiri = PNode->Kiri;
            PNode->Kiri = NodeBaru;
            PNode=NodeBaru->Kiri;
            PNode->Kanan=NodeBaru;
        }
        else
        {
        		//Penambahan di belakang
            PAkhir->Kanan=NodeBaru;
            NodeBaru->Kiri = PAkhir;
            PAkhir=NodeBaru;
        }
      }
   }
}

void DisplayList()
{
   Node *PNode;
   cout<<"Urut dari Kecil ke Besar"<<endl;
   PNode=PAwal;
   while(PNode != NULL)
   {
   	cout<<PNode->Bil<<"\t";
      PNode=PNode->Kanan;
   }
   cout<<endl<<endl<<"Urut dari Besar ke Kecil"<<endl;
   PNode=PAkhir;
   while(PNode != NULL)
   {
   	cout<<PNode->Bil<<"\t";
      PNode=PNode->Kiri;
   }
}

int main()
{
   PAwal = NULL;
   PAkhir = NULL;
   MakeList(40);
   MakeList(25);
   MakeList(30);
   MakeList(80);
   MakeList(50);
   MakeList(100);
   MakeList(10);
   DisplayList();
}
