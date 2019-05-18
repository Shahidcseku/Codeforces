#include<bits/stdc++.h>
using namespace std;
int main()
{
    int len;
    char m[100000];
    cin>>len>>m;

    int x=0,y=0,coin=0;
    for(int i=0;i<len-1;i++)
    {
        if(m[i]=='U')
        {
            y++;
        }
        else
        {
            x++;
        }
        if(x==y && m[i]==m[i+1])
        {
            //cout<<"Point"<<x<<y<<endl;
            coin++;
        }
    }
    cout<<coin<<endl;
}