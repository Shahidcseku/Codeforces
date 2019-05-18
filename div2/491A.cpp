#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,n;
    cin>>a>>b>>c>>n;

    int res = n-((a-c)+(b-c)+c);
    if(res<=0 || (a-c)<0 || (b-c)<0)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        cout<<res<<endl;
    }
}