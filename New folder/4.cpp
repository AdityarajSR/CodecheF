#include <bits/stdc++.h>
using namespace std;

signed main(){
    int t = 1;
    cin>>t;

    while (t--)
    {
        int n;
        cin>>n;

        int a[n];
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
        
        int ans = 0;
        int b[n+1] = {0};
        for(auto it:mp){
            ans = max(ans, it.second);
            b[it.first] = it.second;
        }
        int ans1 = 0;
        for (int i = 0; i < n; i++)
        {
            if(i^(i+1)<=1){
                ans1 = max(ans1, (b[i]+b[i+1]));
            }
        }
        ans = max(ans, ans1);
        cout<<n-ans<<endl;
        

    }
    
    return 0;
}