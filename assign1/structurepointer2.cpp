#include <iostream>
using namespace std;

struct gauge
{
    string info;
    int size;
};


int main(){
    struct gauge harddisk , *ptr ;
    ptr=&harddisk;
    cout<<"ENTER INFO:";
    cin >> ptr->info;
    cout<<"ENTER SIZE:";
    cin >> ptr->size;

    cout << ptr->info << " has " << ptr->size << " kG";


    return 0;
}