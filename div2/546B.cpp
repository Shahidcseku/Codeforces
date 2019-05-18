#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int main()
{
    int n,k;
    cin>>n>>k;

    int act = (n-1)*2 + 3;

    int extra=0, moves=0, total=0;
    if(k<=(n/2))
    {
        extra = k-1;
    }
    else
    {
        extra = n-k;
    }
    moves = n-1+extra;

    total = moves+act;
    //cout<<act<<" "<<extra<<" "<<n-1<<endl;
    cout<<total<<endl;

}