#include<iostream>
using namespace std;

void swapMinMax(int arr[], int size){
    int maxIndex = 0, minIndex = 0;
    int max = INT_MIN;
    int min = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        if(max<arr[i]){
            max= arr[i];
            maxIndex = i;
        }
        if(min>arr[i]){
            min= arr[i];
            minIndex = i;
        }
    }
    swap(arr[minIndex],arr[maxIndex]);
    

}

int main(){
    int arr[] = {1,0,3,5,8,4};
    int size = 6;

    cout<<"Before :"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"After :"<<endl;
    swapMinMax(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    



    return 0;
}