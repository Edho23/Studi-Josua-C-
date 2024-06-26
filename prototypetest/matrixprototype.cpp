//Josua El's code
//1462300077

#include <iostream>
#include <array>

using namespace std;

void MatrixPertama (int matrixA[3][3])
{
    cout<<"\nMartrix A\n";

    for(int i=0;i<3;++i)
    {
        for(int j=0; j<3;++j)
        {
            cout<<"Masukan Nilai matrix "
                <<"["<<i<<"]"<<"["<<j<<"] : ";

            cin>>matrixA[i][j];
        }
    }
    
    cout<<endl;
}

void MatrixKedua (int matrixB[3][3])
{
    cout<<"\nMatrix B\n";

    for(int i=0;i<3;++i)
    {
        for(int j=0; j<3;++j)
        {
            cout<<"Masukan Nilai matrix "
                <<"["<<i<<"]"<<"["<<j<<"] : ";

            cin>>matrixB[i][j];
        }
    } 

    cout<<endl;
}

void hasilmatrixA (int matrixA[3][3])
{
    cout<<"\nMatrix A : ";
    for(int i=0;i<3;++i)
    {
        cout<<endl;

        for(int j=0; j<3;++j)
        {
            cout<<"["<<matrixA[i][j]<<"]";
        }
    }
}

void hasilmatrixB (int matrixB[3][3])
{
    cout<<"\nMatrix B : ";
    for(int i=0;i<3;++i)
    {
        cout<<endl;

        for(int j=0; j<3;++j)
        {
            cout<<"["<<matrixB[i][j]<<"]";
        }
    }
}


void matrixC (int matrixA[3][3], int matrixB[3][3], int matrixPenjumlahan[3][3])
{
    cout<<"\nMATRIX C : ";
    for(int i=0; i<3; i++) 
    {
        cout<<endl;

        for(int j=0; j<3; j++) 
        {
            matrixPenjumlahan[i][j] = matrixA[i][j] + matrixB[i][j];
            cout<<"["<<matrixPenjumlahan[i][j]<<"]";
        }
    }
}

void matrixD (int matrixA[3][3], int skalar)
{
    cout<<"\n\nMasukan Nilai skalar untuk Matrix A : \n";
    cin>>skalar;
    cout<<"\nMATRIX D : \n";
    for(int i=0; i<3; i++) 
    {
        cout<<endl;
        for(int j=0; j<3; j++) 
        {
            matrixA[i][j] *= skalar;
            cout<<"["<<matrixA[i][j]<<"]";
        }
    }
}

void matrixD2 (int matrixB[3][3], int skalar)
{
    cout<<"\n\nMasukan Nilai skalar untuk Matrix B : \n";
    cin>>skalar;
    cout<<"\nMATRIX E : \n";
    for(int i=0; i<3; i++) 
    {
        cout<<endl;
        for(int j=0; j<3; j++) 
        {
            matrixB[i][j] *= skalar;
            cout<<"["<<matrixB[i][j]<<"]";
        }
    }
}

int main()
{
    int matrixA[3][3];
    int matrixB[3][3];
    int matrixPenjumlahan[3][3];
    int skalar;
    int option;
    bool isTrue=true;
    char sui;


    cout<<"Are you ready to start the program?(y/n)\n";
    cin>>sui;

    if(sui=='Y'||sui=='y')
    {
        do
        {

        cout<<"\n\n========MATRIX PROGRAM========\n"
        <<"1. Matrix A\n"
        <<"2. Matrix B\n"
        <<"3. Penjumlahan Matriks\n"
        <<"4. Perkalian Skalar A\n"
        <<"5. Perkalian Skalar B\n"
        <<"6. Finished\n";

        cout<<"========CHOOSE AN OPTION========\n";
        cin>>option;

        switch(option)
        {
            case 1:
            MatrixPertama(matrixA);
            hasilmatrixA(matrixA);
            break;
        
            case 2:
            MatrixKedua(matrixB);
            hasilmatrixB(matrixB);
            break;

            case 3:
            matrixC(matrixA, matrixB, matrixPenjumlahan);
            break;

            case 4:
            matrixD(matrixA, skalar);
            break;
        
            case 5:
                matrixD2(matrixB, skalar);
                break;


            case 6:
                cout<<"Thankyou for using us!\nHave a nice day!";
                isTrue=false;
                break;
        }

    } while (isTrue);
    }
    

    


    
    return 0;
}