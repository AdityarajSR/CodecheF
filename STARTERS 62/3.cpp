#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, y;
        cin >> x >> y;
        
        int ans;
        if(x>=y){
            ans = x/y + x%y;
        }else{
            ans = x;
        }

        cout<<ans<<endl;
    }

    return 0;
}