#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,r;
    cin>>n>>m>>r;

    int nn[n];
    int mm[m];

    for(int i=0;i<n;i++)
    {
        cin>>nn[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>mm[i];
    }
    sort(nn,nn+n);
    sort(mm,mm+m);

    int minPrice = nn[0];
    int maxPrice = mm[m-1];

    int profit = r;
    if(maxPrice>minPrice)
    {
        profit = (r/minPrice)*maxPrice + (r%minPrice);
    }

    cout<<profit<<endl;
}