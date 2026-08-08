#include<iostream>
using namespace std;

int main(){
    int binNum;
    cout<< "Enter a binary number :";
    cin>>binNum;

    int ans = 0, power = 1;
    while (binNum>0)
    {
        int rem = binNum % 10;
        if(rem != 0 && rem != 1){
            cout<<"Invalid binary number";
            return 0;
        }
        binNum = binNum / 10;
        ans  += (rem*power);
        power = power*2;
    }
    cout<<ans<<endl;
    
    return 0;
}