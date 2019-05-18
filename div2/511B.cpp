#include<bits/stdc++.h>
using namespace std;
typedef long long int LL;
int main()
{
    LL n;
    while(cin>>n)
    {
        LL sum=0,a,b;
        for(int i=0;i<n;i++)
        {
            cin>>a>>b;

            if(sum<a+b)
            {
               sum = a+b;
               //cout<<a<<" "<<b<<endl;
            }
        }

        cout<<sum<<endl;
    }
}