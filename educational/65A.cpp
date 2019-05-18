#include<bits/stdc++.h>
using namespace std;
typedef long long int LL;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        char tel[n];
        cin>>tel;

        int flag=0;
        for(int i=0;i<n;i++)
        {
            if(tel[i]=='8' && n-i>=11)
            {
                cout<<"YES"<<endl;
                flag=1;
                break;
            }
        }
        if(!flag)
        {
            cout<<"NO"<<endl;
        }
    }
}