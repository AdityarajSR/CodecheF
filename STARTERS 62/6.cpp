#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int ct=0;
	    for(int i=1;i<n;i++){
	        if(s[i]=='0'&&s[i-1]=='1')ct++;
	    }
	    cout<<ct<<endl;
	    
	}
	return 0;
}
