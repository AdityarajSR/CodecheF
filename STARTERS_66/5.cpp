#include <iostream>
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

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int i = 0;
        int j = n-1;

        int count = 0;
        while (j > i)
        {
            if (a[i] == a[j])
            {
                --j;
                ++i;
            }
            else if (a[i] > a[j])
            {
                /* code */
                a[i] = a[i] - a[j];
                --j;
                count++;
            }
            else
            {
                a[j] = a[j] - a[i];
                ++i;
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}