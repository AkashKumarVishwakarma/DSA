#include<iostream>
using namespace std;

void ReverseAnArray(int arr[], int size){
    int first = 0, last = size-1,temp;
    while(first<last){
        // temp = arr[first];
        // arr[first] = arr[last];
        // arr[last] = temp;
        swap(arr[first], arr[last]);

        first++;
        last --;
    }
}

int main(){
    int arr[] = {1,21,13,44,15,8,6,0};
    int size = 8;

    cout<<"Before Reverse"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    ReverseAnArray(arr, size);

    cout<<"After Reverse"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    return 0;
}