#include<iostream>
using namespace std;

int factorialN(int n){
    if(n<0){
        cout<<"Factorial does not exist for negative number."<<endl;
        return 0;
    }
    if(n == 0 || n == 1){
        return 1;
    }
    return n * factorialN(n-1);
}
int nCrBinomial(int n, int r){
    int fn = factorialN(n);
    int fr = factorialN(r);
    int fnr = factorialN(n-r);

    return fn / (fr * fnr);
}

int main(){
    // cout<<factorialN(5)<<endl;
    int n,r;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"Enter the value of r: ";
    cin>>r;

    if(n < r || n < 0 || r < 0){
        cout<<"Invalid input"<<endl;
        return 0;
    }
    cout<<nCrBinomial(n,r)<<endl;

    return 0;
}