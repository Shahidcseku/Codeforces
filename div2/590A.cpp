#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        int arr[k];
        int sum=0;
        for(int j=0;j<k;j++)
        {
            cin>>arr[j];
            sum+=arr[j];
        }
        cout<<sum/k +  (sum % k != 0)<<endl;
    }

}
