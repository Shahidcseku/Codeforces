#include<bits/stdc++.h>
using namespace std;
typedef long long int LL;
int CountDiv(int a,int b,int k)
{
    int count=0;
    count = (b/k) - (a/k);
    if (a%k==0)
    {
        count++;
    }

    return count;
}
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int L,v,l,r;
        cin>>L>>v>>l>>r;

        int counter=0;
//        for(int j=0;j<=L;j++)
//        {
//            if(j%v==0 && (j<l || j>r))
//            {
//                counter++;
//            }
//        }
        int total = L/v;
        int sub = CountDiv(l,r,v);
//        cout<<total<<"-"<<sub<<endl;

        cout<<total-sub<<endl;
    }
}