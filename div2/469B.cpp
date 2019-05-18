#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,i,j;
    cin>>n>>m;

    long long int x[100000],y[100000];

    for(i=0;i<n;i++)
    {
        cin>>x[i];
    }
    for(i=0;i<m;i++)
    {
        cin>>y[i];
    }

    long long int sumX=0,sumY=0,ans=0;
    i=0;
    j=0;
    sumX+=x[0];
    sumY+=y[0];
    while(i!=n || j!=m)
    {

        while(sumY<sumX)
        {
            j++;
            sumY+=y[j];
        }
        while(sumX<sumY)
        {
            i++;
            sumX+=x[i];
        }
        if(sumX==sumY)
        {
            ans++;
            i++;
            j++;
            sumX+=x[i];
            sumY+=y[j];
        }

    }
    cout<<ans<<endl;
}