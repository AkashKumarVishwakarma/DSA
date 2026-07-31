#include<iostream>
using namespace std;

int main(){

    char ch;
    cout << "Enter a charecter: ";
    cin>>ch;

    if(ch >= 'a' && ch <= 'z'){
        cout<<"Lower Case: "<< ch<<endl;
    } else if(ch >= 'A' && ch <= 'Z') {
        cout<<"UpperCase: "<< ch <<endl;
    }
    else{
        cout<<"Not an alphabet."<<endl;
    }


    return 0;
}