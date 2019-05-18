#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long int a[1001];

    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);

    int c = 0;
    for(int i=0;i<n-1;i++)
    {
        int t =0;
        t = a[i+1]-a[i];
        //cout<<t;
        if(t>1)
        {
            c+=t-1;
        }
    }
    cout<<c<<endl;
}