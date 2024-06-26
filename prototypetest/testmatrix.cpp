#include <iostream>
#include <array>

using namespace std;

int main()
{
    int matrixA[3][3];
    int matrixB[3][3];
    int matrixPenjumlahan[3][3];
    int skalar;

    cout<<"========MATRIX PROGRAM========"<<endl;
    cout<<"Martrix A\n";

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


    cout<<"Matrix B\n";

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


    cout<<"Matrix A : ";
    for(int i=0;i<3;++i)
    {
        cout<<endl;

        for(int j=0; j<3;++j)
        {
            cout<<"["<<matrixA[i][j]<<"]";
        }
    }

    cout<<"\n\nMatrix B : ";
    for(int i=0;i<3;++i)
    {
        cout<<endl;

        for(int j=0; j<3;++j)
        {
            cout<<"["<<matrixB[i][j]<<"]";
        }
    }
    
    cout<<endl;

    cout<<"\n\nMATRIX PENJUMLAHAN : ";
    for(int i=0; i<3; i++) 
    {
        cout<<endl;

        for(int j=0; j<3; j++) 
        {
            matrixPenjumlahan[i][j] = matrixA[i][j] + matrixB[i][j];
            cout<<"["<<matrixPenjumlahan[i][j]<<"]";
        }
    }

    cout<<"\n\nMATRIX SKALAR : ";
    cout<<"\nMasukan Nilai skalar : \n";
    cin>>skalar;
    for(int i=0; i<3; i++) 
    {
        cout<<endl;
        for(int j=0; j<3; j++) 
        {
            matrixA[i][j] *= skalar;
            cout<<"["<<matrixA[i][j]<<"]";
        }
    }
    return 0;
}