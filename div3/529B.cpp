#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int arr[100000];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int ans = 0;
    if(n>2)
    {
         int diff1 = arr[n-1]-arr[n-2];
         int diff2 = arr[1]-arr[0];
         if(diff1>diff2)
         {
             ans = arr[n-2] - arr[0];
         }
         else
         {
             ans = arr[n-1] - arr[1];
         }
    }
    else
    {
         ans = 0;
    }
    cout<<ans<<endl;
}