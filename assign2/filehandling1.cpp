#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string line;
    string name;
    cout<<"Enter name of file to create:";
    cin>>name;
    ofstream create(name,ios::app);
    cout<<"Enter content of file and press -1 to exit:\n";
    while(create){
    getline(cin,line);
    if(line=="-1"){
        break;
    }
    create<<line<<endl;
    }
    create.close();
    cout<<"\n\nDisplaying file "<<name<<"\n";
    ifstream see(name);
    while(see){
       getline(see,line);
       cout<<line<<"\n";
    }
    see.close();
    return 0;
}