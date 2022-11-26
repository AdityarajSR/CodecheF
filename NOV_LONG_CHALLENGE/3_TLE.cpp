#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin>>n;

        string s;
        cin>>s;

        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            int ct = count(s.begin(), s.end(), s[i]);
            if(ct %2 == 0){
                ans = 0;
            }else{
                ans = 1;
                break;
            }
        }


        if(ans == 1){
            cout<<"no"<<endl;
        }else{
            cout<<"yes"<<endl;
        }
        
    }
    
    return 0;
}