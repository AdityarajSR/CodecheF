#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while (t--)
    {
        double n, x, y;
        cin>>n>>x>>y;

        double a = n - y/x;
        
        int test = a;

        double t = test - a;

        if (t<0)
        {
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
    
    return 0;
}