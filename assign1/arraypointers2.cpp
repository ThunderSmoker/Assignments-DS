#include <iostream>
using namespace std;

int main(){
    int arr[5]={1,3,5,66,7};
    int *pointer=&arr[0];
    *pointer+=arr[3];
    cout<<*pointer<<" ";

    return 0;
}