#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,v;
    cin>>n>>v;

    if(v>=n-1)
    {
        cout<<n-1<<endl;
    }
    else
    {
        int cost=0,city=v+1;
        cost = v;
        for(int inc=2; ;inc++)
        {
            //cout<<cost<<" + ";
            city++;
            cost += inc;

            if(city==n)
            {
                cout<<cost<<endl;
                break;
            }
        }
    }
}