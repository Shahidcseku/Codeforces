#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c;

    while(cin>>n)
    {
        int arr[1004];
        int arrN[1004];

        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        c=0;
        int j=0;
        arrN[j++] = arr[n-1];
        for(int i=n-1;i>=0;i--)
        {
            if(arr[i]==1)
            {
                c++;
                arrN[j++] = arr[i-1];
                //cout<<arr[i-1]<<"fads";
            }
        }
        cout<<c<<endl;
        for(int i=c-1;i>0;i--)
        {
            cout<<arrN[i]<<" ";
        }
        cout<<arrN[0]<<endl;
    }
}