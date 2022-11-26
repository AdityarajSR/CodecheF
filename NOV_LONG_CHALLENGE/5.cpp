#include <bits/stdc++.h>
using namespace std;
#define int long long

int fact(int s) {
   if ((s==0)||(s==1))
   return 1;
   else
   return s*fact(s-1);
}

int facto[1000001];

// // void fn(){
//     // facto[1] = 1;
//     for (int i = 0; i < 1000001; i++)
//     {
//         facto[i] = fact(i);
//     }




signed main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int sum = 0;
        double a = pow(10, 9) + 7;
        int b = a;

        for (int i = 0; i < n; i++)
        {
            int ai;
            cin >> ai;

            int ans = fact(ai);
            ans %= b;

            sum += ans;
            sum %= b;
        }
        cout<<(sum)%b<<endl;
    }

    return 0;
}