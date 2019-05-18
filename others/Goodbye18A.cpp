#include<bits/stdc++.h>
using namespace std;
typedef long long int LL;
int main()
{
    int y,b,r;
    cin>>y>>b>>r;
    int f = 0;
    for(int i=r;i>2;i--)
    {
        for(int j=b;j>1;j--)
        {
            for(int k=y;k>0;k--)
            {
                if(i-2==k && j-1==k)
                {

                    cout<<i+j+k<<endl;
                    f = 1;
                    break;
                }
            }
            if(f)
            {
                break;
            }

        }
        if(f)
        {
            break;
        }
    }
}