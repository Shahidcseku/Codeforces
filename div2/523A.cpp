#include<bits/stdc++.h>
using namespace std;
typedef long long int LL;
int main()
{
    int n,S;
    while(cin>>n>>S)
    {
        LL sum = 0;
        for(int i=n;i>0;i--)
        {
            sum+= S/i;
            S = S%i;
            //cout<<sum<<" "<<S<<endl;
            if(S==0)
            {
                break;
            }
        }
        cout<<sum<<endl;
    }
}