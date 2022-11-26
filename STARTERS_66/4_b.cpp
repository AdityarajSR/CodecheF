#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m, k, x;
        cin >> n >> m >> k >> x;

        int a = n * (k - 1);

        int b = (n * k) + m;

        int ans;
        if(x % b == 0){
            ans = x/b;
        }else{
            ans = (x/b) + 1;
        }

        int bb = ans*b;
        int aa = bb -(b-a);


        if(aa< x && x <= bb){
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }
    }

    return 0;
}