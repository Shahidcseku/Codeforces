#include<bits/stdc++.h>
using namespace std;
typedef long long int LL;
int main()
{
    int n;
    int arr[101];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k=0;
    for(int i=1;i<n-1;i++)
    {
        if(arr[i-1]==1 && arr[i]==0 && arr[i+1]==1)
        {
            k++;
            arr[i+1] = 0;
        }
    }
    cout<<k<<endl;

}