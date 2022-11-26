#include <iostream>
using namespace std;
#define int long long
signed main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int sum=0;
	    for (int i = 0; i < n; i++) {
	       int num;
	       cin>>num;
	       sum+=num;
	       sum%= 998244353;

	    }
	    sum*=(sum-1);
	    sum%= 998244353;
	    cout<<sum<<endl;
	}
	return 0;
}