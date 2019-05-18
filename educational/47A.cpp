#include<bits/stdc++.h>
typedef long long int LL;
using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
    int n,m,game=0;
    int cost[1001],bill[1001];

    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>cost[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>bill[i];
    }

    int j=0,k=0;
    while(1)
    {
        if(j==n || k==m)
        {
            break;
        }
        if(cost[j]<=bill[k])
        {
            game++;
            j++;
            k++;
        }
        else
        {
            j++;
        }
    }
    cout<<game<<endl;

}