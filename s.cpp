#include<iostream>
using namespace std;

int main() {
    // int arr[] = {1,2,3,4,5};
    
    // for(int i=0;i<5;i++) {
    //     cout<<arr[i] <<" ";
    // }


    int n;
    cin>>n;
    int room[n];
    for(int i=0;i<n;i++) {
        cin>>room[i];
    }

    for(int i=0;i<n;i++) {
        cout<<i<<" ->"<<room[i]<<endl;
    }
    return 0;
}