#include<iostream>
using namespace std;

int main(){
    int num[] = {2,5,1,7,-4,-23,0};

    int smallest = INT_MAX;
    int largest = INT_MIN;
    int idx = 0;

    for (int i = 0; i <= 6; i++)
    {
        if(num[i]<smallest){
            smallest = num[i];
            idx = i;
        }

        // smallest = min(num[i], smallest);


        // if(num[i]>largest){
        //     largest = num[i];
        //     idx = i;
        // }

        // largest = max(num[i], largest);

    }

    for (int i = 0; i <= 6; i++)
    {
        cout<<num[i]<<" ";
    }
    cout<<endl;
    

    cout<<"Smallest "<<smallest<<endl;
    cout<<"index "<<idx<<endl;

    // cout<<"Largest "<<largest<<endl;
    // cout<<"index "<<idx<<endl;
    

    return 0;
}