#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int p[100];

    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
    }
    sort(p,p+n);
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(p[i]!=0 && p[i]!=p[i-1])
        {
            ans++;
        }
    }
    cout<<ans<<endl;
}