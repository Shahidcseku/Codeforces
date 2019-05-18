#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+n);

    int first = arr[n-1];
    int second, flag=0;

    for(int i=n-1;i>=0;i--)
    {
        if(first%arr[i]==0)
        {
            continue;
        }
        else
        {
            second = arr[i];
            flag = 1;
            break;
        }
    }
    if(flag)
    {
        cout<<first<<" "<<second<<endl;
    }
    else
    {
        for(int i=n-1;i>=0;i--)
        {
            if(arr[i]==arr[i-1])
            {
                second = arr[i];
                break;
            }
        }
        cout<<first<<" "<<second<<endl;
    }

}