#include<bits/stdc++.h>
typedef long long int LL;
using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
    int n;
    LL m;
    LL arr[200000];
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    LL sum=0;
    for(int i=0;i<n;i++)
    {
        cout<<(sum+arr[i])/m<<" ";
        sum = (sum+arr[i])%m;
    }
    cout<<endl;

}