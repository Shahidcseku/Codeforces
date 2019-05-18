#include<bits/stdc++.h>
using namespace std;
typedef long long int LL;
int main()
{
    LL l,r;
    cin>>l>>r;
    cout<<"YES"<<endl;

    for(LL i=l;i<r;i+=2)
    {
        cout<<i<<" "<<i+1<<endl;
    }
}