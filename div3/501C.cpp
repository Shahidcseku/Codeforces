#include<bits/stdc++.h>
typedef long long LL;
using namespace std;
int main()
{
    int n;
    LL m;
    LL aa,bb;
    LL sub[100000];
    LL sum=0;

    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>aa>>bb;
        sub[i] = aa-bb;
        sum += aa;
    }
    if(sum>m)
    {
        sort(sub,sub+n, greater<int>());
        int i=0,counter=0,flag2=0;
        while(sum>m)
        {
            if(i==n)
            {
                flag2=1;
                break;
            }
            //cout<<sum<<"-";
            sum = sum - sub[i];
            //cout<<sub[i]<<" = "<<sum<<"."<<endl;
            counter++;
            i++;

        }
        if(flag2==0)
        {
            cout<<counter<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }
    else
    {
        cout<<0<<endl;
    }


}