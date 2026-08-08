#include<iostream>
using namespace std;

int main(){
    int num;
    cout <<"Enter a number: ";
    cin>>num;

    if(num > 0 && (num & (num-1))== 0){
        cout<<"Yes "<<num<<" is power of 2"<<endl;
    } else{
        cout<<"No "<<num<<" is not power of 2"<<endl;
    }


    return 0;
}