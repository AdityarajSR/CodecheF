#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, q;
        cin >> n >> q;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int l[q], r[q];
        for (int i = 0; i < q; i++)
        {
            cin >> l[i] >> r[i];
        }
        ///////////////////////////////////////////////////////////////
        for (int i = 0; i < q; i++)
        {
            int xx = l[i]-1;
            int yy = r[i]-1;
            
            for (int j = l[i] - 1; j <= r[i] - 1; j++)
            {
                // int aa = 0;
                // int bb = r[i]-l[i];

                if (j % 2 == 0)
                {
                    a[j] = a[j] + 1;
                }
                else
                {
                    a[j] = a[j] - 1;
                }
            }
        }

        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum = sum + a[i];
        }

        cout << sum << endl;
    }

    return 0;
}