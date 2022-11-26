#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int a, b, c;
        cin>>a>>b>>c;

        int mx = max(max(a, b), c);
        int mn = min(min(a, b), c);

        cout<<mx-mn<<endl;
    }
    
    return 0;
}