#include <iostream>
#include <conio.h>

using namespace std;


int tinggiRows (int rows )
{
    for(int I=0 ; I<rows ; ++I)
	{
        int counter =1;
		for(int J=0 ; J<rows - I ; ++J)
		{
            cout<<counter;
            ++counter;
			if(counter > 9)
            {
                counter = 1;

            }
            cout<<" ";
		}
		cout<<endl;
	}
    return rows;
    
}


int main() 
{
    int rows;
    cout<<"Input banyak rows : ";
    cin>>rows;
    rows=tinggiRows(rows);
    getch();
}



/*for(int I=1 ; I<=rows ; I++)
	{
		for(int J=rows-I ; J>=0 ; J--)
		{
			cout<<(J+1);
		}
		cout<<endl;
	}*/