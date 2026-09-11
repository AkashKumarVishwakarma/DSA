#include<iostream>
using namespace std;

pair<int, int> sum_productOfArray(int arr[], int size){
    int sum = 0, product = 1;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
        product *= arr[i]; 
    }
    return {sum,product};
}

int main(){
    int arr[] = {1,2,3,5,4,4};
    int size = 6;

    pair<int, int> result = sum_productOfArray(arr, size);
    cout<<"Sum "<<result.first<<endl;
    cout<<"Product "<<result.second<<endl;
    
    return 0;
}