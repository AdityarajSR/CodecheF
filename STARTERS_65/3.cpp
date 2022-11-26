#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int b = 2*n;

        int a[b];

        map<int, int> mp;
        for (int i = 0; i < b; i++)
        {
            cin >> a[i];

            mp[a[i]]++;
        }

        int ab = 0;
        for (auto it : mp)
        {
            if ((it.second) > 2)
            {
                // cout<<"no"<<endl;
                ab = 1;
                break;
            }
        }

        if (ab == 1)
        {
            cout << "no" << endl;
        }
        else
        {
            cout << "yes" << endl;
        }

        // cout<<"yes"<<endl;
    }

    return 0;
}