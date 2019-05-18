#include<bits/stdc++.h>
typedef long long int LL;
using namespace std;
int main()
{
    LL arr[1001];
    //freopen("input.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]%2==0)
        {
            arr[i] = arr[i]-1;
        }
        cout<<arr[i]<<" ";
    }
    if(arr[n-1]%2==0)
    {
        cout<<arr[n-1]-1<<endl;
    }
    else
    {
         cout<<arr[n-1]<<endl;
    }


}