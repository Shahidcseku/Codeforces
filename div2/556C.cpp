#include<bits/stdc++.h>
using namespace std;

int main()
{
    int one=0,two=0,n;
    cin>>n;

    int num;
    for(int i=0;i<n;i++)
    {
        cin>>num;

        if(num==1)
        {
            one++;
        }
        else
        {
            two++;
        }
    }

    if(two>0 && one>0)
    {
        cout<<2<<" "<<1<<" ";
        two--;
        one--;
        while(two--)
        {
            cout<<2<<" ";
        }
        while(one--)
        {
            cout<<1<<" ";
        }
    }
    else if(two>0 & one<=0)
    {
        while(two--)
        {
            cout<<2<<" ";
        }
    }
    else if(one>0 & two<=0)
    {
        while(one--)
        {
            cout<<1<<" ";
        }

    }
}