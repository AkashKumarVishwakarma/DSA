#include<iostream>
using namespace std;

int LinearSearch(int arr[], int size, int value){
    for (int i = 0; i <= size-1; i++)
    {
        if(arr[i]== value) return i;
    }
    return -1;
}

int main(){
    int arr[] = {1,5,8,3,2,9,8,7,0};
    int value = 6;
    // int value = 9;
    int size = 9;

    if(LinearSearch(arr, size, value) == -1){
        cout<<"Value Not found in this Array"<<endl;
    }
    cout<<"Index :"<<LinearSearch(arr,size,value)<<endl;

    return 0;
}