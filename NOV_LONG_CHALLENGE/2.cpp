#include <iostream>
using namespace std;

void fn(){
    int a, b, x, y;
    cin>>a>>b>>x>>y;

    if (b == a)
    {
        cout<<"yes"<<endl;
    }else if (b>a)
    {
        if ((a+x)>=b)
        {
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }
    }else{
        if ((a-y)<=b)
        {
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }
    }
}

int main(){
    int t;
    cin>>t;

    while (t--)
    {
        fn();
    }
    
    return 0;
}