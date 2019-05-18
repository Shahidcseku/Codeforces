#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int arr[n+1];
    arr[0] =0;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n+1);

    int contest=0,day=1;
    for(int i=1;i<=n;i++)
    {
        if(arr[i]>=day)
        {
            //cout<<arr[i]<<" at day "<<i<<endl;
            contest++;
            day++;
        }
    }
    cout<<contest<<endl;
}