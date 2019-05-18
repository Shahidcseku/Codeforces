#include<bits/stdc++.h>
using namespace std;
typedef long long int LL;
int main()
{
    LL t;
    cin>>t;
    while(t--)
    {
        LL a,b,n;
        cin>>a>>b>>n;

        LL diff = a-b;
        if(n%2==0)
        {
            cout<<diff*(n/2)<<endl;
        }
        else
        {
            cout<<diff*(n/2)+a<<endl;
            //cout<<diff<<"*n/2+"<<a<<endl;
        }
    }

}