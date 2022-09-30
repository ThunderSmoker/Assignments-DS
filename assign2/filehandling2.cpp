#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string user,pass;
    
    ofstream create("db.txt",ios::app);
    cout<<"Enter username and pass to create acc: ";
    cin>>user>>pass;
    create<<user<<' '<<pass<<' '<<"\n";
    cout<<"\n\nUSER CREATED!!\n";
    create.close();
    cout<<"\n\nEnter user and pass:"<<"\n";
    string u,p;
    cin>>u>>p;
    ifstream see("db.txt");
    see>>user>>pass;
    if(user==u && p==pass){
        cout<<"LOG INNED!\n";
    }
    else{
        cout<<"FAILED\n";
    }
    see.close();
    return 0;
}