#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a negative number: ";
    cin >>num;

    if(num>=0){
        cout<<"Please anter a negative number";
        return 0;
    }
    int positive = -num;
    int binary[8] = {0};

    int i = 7;

    while(positive > 0 && i >= 0){
        binary[i] = positive % 2;
        positive /= 2;
        i--;
    }
    // 1'sComplement
    for(int i = 0; i<8; i++){
        binary[i] = 1 - binary[i]; // 1-0 = 1 & 1-1 = 0
    }
    for (int i = 7; i >=0; i--)
    {
        if(binary[i] == 0){
            binary[i] = 1;
            break;
        }
        binary[i] = 0;
    }
    cout<<"2's Complement: ";
    for(int i =0; i<8; i++){
        cout<<binary[i];
    }

    return 0;
}