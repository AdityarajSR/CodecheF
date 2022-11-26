#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int ab = 0;

        for (int i = 0; i < n; i++)
        {
            if (k == a[i])
            {
                ab = 1;
                break;
            }
        }

        if (ab == 1)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }

    return 0;
}
