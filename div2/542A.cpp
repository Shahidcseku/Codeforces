#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int cnt=0,c=0;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        if(temp>0)
        {
            cnt++;
        }
        else if(temp<0)
        {
            c++;
        }
    }
    int mid = 0;
    if(n%2==0)
    {
        mid = n/2;
    }
    else
    {
        mid = n/2+1;
    }
    if(cnt>=mid)
    {
        cout<<2<<endl;
    }
    else if(c>=mid)
    {
        cout<<-2<<endl;
    }
    else
    {
        cout<<0<<endl;
    }

}