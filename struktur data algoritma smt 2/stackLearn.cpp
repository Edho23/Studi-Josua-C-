#include<iostream>

using namespace std;

const int x=3;
string arrBook[x];
int top=0;



bool isFull()
{
    if(top==x)
        return true;
    else
        return false;
}

bool isEmpty()
{
    if(top==0)
        return true;
    else
        return false;
}

void pushArr(string data)
{
    if(isFull())
    {
        cout<<"-----WARNING-----"<<endl;
        cout<<"STACK OVERFLOW!!"<<endl;
    }else
    {
        arrBook[top]=data;
        top++;
    }
}

void popArr()
{
    if(isEmpty())
    {
        cout<<"Data Empty!!!"<<endl;
    } else
    {
        arrBook[top-1]="";
        top--;
    }
}



void displayArr()
{
     if(isEmpty())
    {
        cout<<"Data Empty!!!"<<endl;
    } else
    {
        cout<<"Data Stcak Array: "<<endl;
    for(int i=x;i>=0;i--)
    {
        if(arrBook[i]!="")
        {
        cout<<"Data: "<<arrBook[i]<<endl;
        }
    }
    }
    cout<<endl;
}

void peekArr(int posisi)
{
    if(isEmpty())
    {
        cout<<"Data Empty!!!"<<endl;    
    } else 
    {
        int index = top;
        for(int i=0;i<posisi;i++)
        {
            index--;
        }
        cout<<"Data Posisi ke-"<<posisi <<" :  "<<arrBook[index] <<" Pada Index: "<<index<<endl;
    }
}

void changeArr(string data, int posisi)
{
    if(isEmpty())
    {
        cout<<"Data Empty!!!"<<endl;    
    } else 
    {
        int index = top;
        for(int i=0;i<posisi;i++)
        {
            index--;
        }
        arrBook[index] = data;
    }
}

int countArr()
{
     if(isEmpty())
    {
        return 0;
    } else
    {
        return top;
    }
    cout<<endl;
}

void destroy()
{
    for(int i=0; i < top; i++)
    {
        arrBook[i]="";
    }
    top=0;
}

int main()
{
    pushArr("Messi");
    pushArr("Lionel");
    pushArr("Lukaku");
    
    displayArr();

    pushArr("Ronaldo");
    displayArr();

    popArr();
    displayArr();


    cout<<"Is it full?"<<isFull()<<endl;
    cout<<"Is it empty?"<<isEmpty()<<endl;
    peekArr(2);
    cout<<"Jumlah Data: "<<countArr()<<endl;

    changeArr("Neymar", 1);
    displayArr(); 

    destroy();
    cout<<"Is it full?"<<isFull()<<endl;
    cout<<"Is it empty?"<<isEmpty()<<endl;
}