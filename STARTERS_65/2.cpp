#include <bits/stdc++.h>
using namespace std;
#define int long long 

bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;
 
    // Check from 2 to square root of n
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
 
    return true;
}

signed main(){
    int t;
    cin>>t;

    while (t--)
    {
        int a, b;
        cin>>a>>b;

        int c = a+b;

        bool q = isPrime(c);
        if(q == true){
            cout<<"alice"<<endl;
        }else{
            cout<<"bob"<<endl;
        }
    }
    
    return 0;
}