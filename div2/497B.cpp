#include<bits/stdc++.h>
typedef long long int LL;
using namespace std;
LL h[100000];
LL w[100000];
bool valid(int n1,int n2)
{
    if(n1<n2)
    {
        return false;
    }
    return true;

}
int dp(int n)
{
    LL x,y,z;
    int flag=0;
    x = max(h[0],w[0]);
    for(int i=1;i<n;i++)
    {
        y = max(h[i],w[i]);
        z = min(h[i],w[i]);
        if(valid(x,y))
        {
            x = y;
        }
        else if(valid(x,z))
        {
            x = z;
        }
        else
        {
            flag=1;
            break;
        }
    }

    if(flag==1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
}
int main()
{
    //freopen("input.txt","r",stdin);
    int n;
    cin>>n;
    memset(h,0,sizeof(h));
    memset(w,0,sizeof(w));
    for(int i=0;i<n;i++)
    {
        cin>>h[i];
        cin>>w[i];
    }
    dp(n);


}