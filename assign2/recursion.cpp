#include<iostream>
using namespace std;
int fibonacci(int n){
    if(n<=1) return 1;
    return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
    int n;
    cout<<"ENTER THE NUMBER FOR nth TERM IN FIBONACCI:";
    cin>>n;
    cout<<fibonacci(n-1)<<"\n";
    return 0;
}