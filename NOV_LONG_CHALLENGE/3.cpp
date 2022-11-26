#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int ans = 0;

        map<char, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[s[i]]++;
        }
        

        map<char,int>:: iterator itr;
        for(itr= mp.begin(); itr != mp.end(); itr++){
            
            if((itr->second)%2 == 1){
                ans = 1;
                break;
            }
        }

        if(ans == 1){
            cout<<"no"<<endl;
        }else{
            cout<<"no"<<endl;
        }
        
    }

    return 0;
}