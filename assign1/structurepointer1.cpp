#include<iostream>
using namespace std;
struct date{
   string day;
   int month;
   int year;
};
int main(){
    struct date tim, *ptr;
    ptr  = &tim;
    
    cout<<"Enter Day:\n";
    cin>>ptr->day;
    cout<<"Enter Month:\n";
    cin>>ptr->month;
    cout<<"Enter year:\n";
    cin>>ptr->year;
    cout<<"\n\nTodays Chrono:\n";
    cout<<ptr->day<<"\n";
    cout<<ptr->month<<" ";
    cout<<ptr->year<<"\n";
    return 0;
}