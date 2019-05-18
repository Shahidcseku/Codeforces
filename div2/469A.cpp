#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,r,a;
    cin>>l>>r>>a;

    int ans = 2*min(l,r)+2*min(a,abs(l-r))+2*((a-min(a,abs(l-r)))/2);
    cout<<ans<<endl;
}