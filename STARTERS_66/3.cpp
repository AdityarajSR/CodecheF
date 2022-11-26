#include <bits/stdc++.h>
using namespace std;
#define int long long 

signed main(){
    int t;
    cin>>t;

    while (t--)
    {
        int n, a, b;
        cin>>n>>a>>b;

        int x = log2(n);

        int ans = (x*a) + ((x-1)*b);

        cout<<ans<<endl;
    }
    
    return 0;
}