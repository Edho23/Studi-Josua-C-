#include <iostream>


using namespace std;

int main()
{
    int i, j, a[20], b[20], banyakA, banyakB;
    cout<< "Himpunan Gabungan dan Irisan dari Himpunan A & Himpunan B"<<endl;
    cout<< "Masukan banyak Himpunan A: ";
    cin>>banyakA;
    


    for(i=0; i<banyakA;i++)
    {
        cout<< "Masukan Anggota "<< i+1 <<" = ";
        cin >> a[i];
    }
    cout<<"----------------------------------------------\n";
    cout<< "Masukan banyak Himpunan B: ";
    cin>>banyakB;
     for(i=0; i<banyakB;i++)
    {
        cout<< "Masukan Anggota "<< i+1 <<" = ";
        cin >> b[i];
    }
    cout<<"===========================";
    cout<<"\n\nHimpunan A ={ ";
    for (i=0; i<banyakA; i++)
    {
        cout<<a[i]<<", ";
    }
    cout<<"}";

    cout<<"\n\nHimpunan B ={ ";
    for (i=0; i<banyakB; i++)
    {
        cout << b[i]<< ", ";
    }
    cout<<"}";


    cout<< "\n\nA irisan B = { ";
    for(i=0; i<banyakA; i++)
    {
        for(j=0; j<banyakB; j++)
        {
            if(a[i]==b[j])
                cout<< a[i]<<",  ";
        }
    }
    cout<<"}";

    cout<< "\n\nA gabungan B ={ ";
    for(i=0; i<banyakA; i++)
    {
        cout<<a[i]<<", ";
    }
    for(i=0; i<banyakB; i++)
    {
        cout<<b[i]<<", ";
    }
    cout<<" }";
    
    cout<<"\n\nA selisih B ={ ";
    for(i=0;i<banyakA;i++)
    {
        for(j=0;j<banyakB;j++)
        {
            if(a[i]==b[j])
            {
                break;
            }
        }
        if(j==banyakB)
        cout<< a[i]<<" , ";
    }
    cout<<" }";

    cout<<"\n\nA XOR B ={ ";
    for(i=0;i<banyakA;i++)
    {
        bool found = false;
        for(j=0;j<banyakB;j++)
        {
            if(a[i]==b[j])
            {
                found = true;
                break;
            }
        }
        if(!found)
        cout<< a[i]<<" , ";
    }
    for(i=0;i<banyakB;i++)
    {
        bool found = false;
        for(j=0;j<banyakA;j++)
        {
            if(b[i]==a[j])
            {
                found = true;
                break;
            }
        }
        if(!found)
        cout<< b[i]<<" , ";
    }
    cout<<" }";
    

    return 0;
}