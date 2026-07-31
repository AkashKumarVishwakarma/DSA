#include<iostream>
using namespace std;

void fibonacciSeries(int n){
    int prev = 0;
    int curr = 1;
    cout << prev << " "<<curr<<" ";
    for (int i = 2; i <= n; i++)
    {
        int next = prev + curr;
        cout<<next<<" ";

        prev = curr;
        curr = next;
    }
    
}
int nthFibonacci(int n){
    int prev = 0;
    int curr =1;
    int next;
    for (int i = 2; i <= n; i++)
    {
        next = prev + curr;
        prev = curr;
        curr = next;
    }
    return next;
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    fibonacciSeries(n);
    cout<<endl;
    cout<<nthFibonacci(n);

    return 0;
}