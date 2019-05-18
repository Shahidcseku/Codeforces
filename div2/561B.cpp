#include<bits/stdc++.h>
using namespace std;
typedef long long int LL;

int main()
{
    int n;
    cin>>n;

    int f=0,ff=0,x,y;
    if(n<25)
    {
        cout<<-1<<endl;
        f = 1;
    }
    else
    {
        for(int i=5;i<n-5;i++)
        {
            for(int j=5;j<n-5;j++)
            {
                if(i*j==n)
                {
                    x=i;
                    y=j;
                    ff=1;
                    break;
                }
            }
        }
    }
    if(f==0 && ff==1)
    {
        string str="";
        char v[] = {'a','e','i','o','u'};
        int start=0;
        for(int i=0;i<y;i++)
        {
            for(int j=0;j<x;j++)
            {
                int take=(start+j)%5;
                str+=v[take];
            }
            start++;
        }
        cout<<str;

    }
    else if(f==0)
    {
        cout<<-1<<endl;
    }
}