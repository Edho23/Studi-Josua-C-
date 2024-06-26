#include <iostream>
#include <fstream>

using namespace std;

class temp
{
    string userName, Email, password;
    fstream file;
    public:
    void login();
    void signUp();
    void forgot();
}obj;


int main()
{
    char choice;
    cout<<"\n--------HELLO MY FRIENDS---------"
        <<"\n--------WELCOME---------"
        <<"\n1. Login"
        <<"\n2. Signup"
        <<"\n3. Forgot password"
        <<"\n4. Exit";
    cout<<"\n-------CHOOSE AN OPTION!--------"<<endl;
    cin>>choice;

    switch(choice)
    {
        case '1':
            obj.login();
        break;

        case '2':
            obj.signUp();
        break;

        case '3':
            obj.forgot();
        break;

        case '4':
            return 0;
        break;
            default:
            cout<<"\nInvalid Option!! Please enter a valid option.";
    }
}

void temp :: signUp()
{
    cout<<"Enter your Username: "<<endl;
    cin>> userName;

    cout<<"Enter your Email: "<<endl;
    cin>> Email;
    
    cout<<"Enter your Password: "<<endl;
    cin>> password;
    
    file.open("loginData.txt",ios :: out | ios :: app);
    file<<userName<<'*'<<Email<<'*'<<password<<endl;
    file.close();
}

void temp :: login()
{
    string searchName, searchPass, searchEmail;
    cout<<"----------LOGIN-----------\n"<<endl;
    cout<<"Enter Username: "<<endl;
    cin>>searchName;
    cout<<"Enter Password: "<<endl;
    cin>>searchPass;

    file.open("loginData.txt",ios::in);
    getline(file,userName,'*');
    getline(file,Email,'*');
    getline(file,password,'\n');
    while(!file.eof())
        {
            if(userName==searchName)
            {
                if(password==searchPass)
                {
                    cout<<"Login Successful!";
                    cout<<"Username: "<<userName<<endl;
                    cout<<"Email: "<<Email<<endl;
                }else{
                    cout<<"---------Incorrect password!----------"<<endl;
                }
            }
    getline(file,userName,'*');
    getline(file,Email,'*');
    getline(file,password,'\n');
    }
    file.close();
}
void temp::forgot()
{
    string searchName, searchPass, searchEmail;
    cout<<"\nEnter Username: ";
    cin>>searchName;
    cout<<"\nEnter Email: ";
    cin>>searchEmail;

    file.open("loginData.txt",ios::in);
    getline(file,userName,'*');
    getline(file,Email,'*');
    getline(file,password,'\n');
    while(!file.eof())
    {
        if(userName==searchName){
            if(Email==searchEmail){
                cout<<"Account found!"<<endl;
                cout<<"Your passwrod is: "<<password<<endl;
            }else{ 
            cout<<"---------No such user found!-----------"<<endl;
            }
    }else{
        cout<<"---------User not found!-----------"<<endl;
        }
    }
    file.close();
    
}