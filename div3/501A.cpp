#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    int l,r;
    cin>>n>>m;
    int arr[m+1];
    memset(arr,0,sizeof(arr));
    for(int i=1;i<=n;i++)
    {
        cin>>l>>r;
        for(int j=l;j<=r;j++)
        {
            arr[j] = -1;
        }
    }


    int counter=0;
    for(int i=1;i<=m;i++)
    {
        if(arr[i]!=-1)
        {
            counter++;
        }
    }
    cout<<counter<<endl;
    for(int i=1;i<=m;i++)
    {
        if(arr[i]!=-1)
        {
            cout<<i<<" ";
        }
    }
}