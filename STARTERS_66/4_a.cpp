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
        // cout<<"a is "<<a<<endl;
        int b = (n * k) + m;
        // cout<<"b is "<<b<<endl;

        while (x > 0)
        {
            x = x - b;
        }
        // cout<<"x is " << x<<endl;

        if (x <= 0)
        {
            x = x + b;
        }

        // cout<<"x is " << x<<endl;


        if(a< x && x <= b){
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }
    }

    return 0;
}