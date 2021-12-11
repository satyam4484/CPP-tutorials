#include<iostream>
using namespace std;


int main() {
	string s;
    cin>>s;
    // cout<<s<<endl;
    // cout<<s[3]<<endl;

    string ans;
    for(int i=0;i<s.size();i++) {
        if(i%2) {
            ans = ans+s[i];
        }
    }

    // satyamsingh  
    cout<<ans<<endl;
	return 0;
}