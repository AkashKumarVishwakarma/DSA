#include<iostream>
using namespace std;

int reverseAnInteger(int num){
    int newNumber = 0;
    while(num>0){
        int rem = num % 10;
        num /= 10;
        newNumber = newNumber *10 + rem;
    }

    return newNumber;
}
int main(){

    int num;
    cout<<"Enter an Integer: ";
    cin>>num;
    cout<<reverseAnInteger(num);

    return 0;
}