#include <iostream>
using namespace std;

int main(){
    int arr[5]={1,3,5,66,7};
    int *pointer=&arr[0];
    for(int i=0;i<5;i++){
    cout<<*pointer<<" ";
    pointer++;
    }

    return 0;
}