#include<iostream>
using namespace std;


int main ( ) {
    int a,b,c;
    cin>>a>>b>>c;
    // scanf('%d %d %d',&a,&b,&c);

    // if conditions
    // if(a>b && a>c) {
    //     // cout<<a<<endl;
    //     cout<<a<<"\n";
    // }else if(b>a and b>c) {
    //     cout<<b<<endl;
    // }else{
    //     cout<<c<<endl;
    // }


    if(a>b) {
        // cout<<"line 22 "
        if(a>c) {
            cout<<a<<endl;
        }else if(b>c) {
            cout<<b<<endl;
        }else{
            cout<<c<<endl;
        }
    }else if(b>a) {
        if(b>c) {
            cout<<b<<endl;
        }else if(a>c) {
            cout<<a<<endl;
        }else{
            cout<<c<<endl;
        }
    }else{
        cout<<c<<endl;
    }

    return 0;
}