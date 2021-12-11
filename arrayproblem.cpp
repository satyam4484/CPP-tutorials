#include<iostream>
using namespace std;


int main() {
	int n;
	cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    // max numbers finding 
    // int maxans = -1;
    // for(int i=0;i<n;i++) {
    //     if(maxans < arr[i]) {
    //         cout<<i<<" ";
    //         maxans = arr[i];
    //     }
    // }
    // cout<<maxans<<endl;

    int sum = 1;
    for(int i=0;i<n;i++) {
        sum = sum*arr[i];
    }
    cout<<sum<<endl;

	return 0;
}