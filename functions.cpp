#include<iostream>
using namespace std;


int add(int a,int b) {
    return a+b;
}

string add(string a) {
    return a;
}

int add (int a) {
    return a*a*a;
}

int add(int a,int b,int c) {
    return a*b*c;
}

int main() {
	int a,b,c;
    cin>>a>>b>>c;
    cout<<add(a,b)<<endl;
    cout<<add(a)<<endl;
    cout<<add("sgsjsvsj")<<endl;

    
	return 0;
}