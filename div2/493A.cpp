#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int sum=0,temp=0,to=0,flag=0,flag2=0;
        int b[11];
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
            sum+=b[i];
        }
        if(n==1)
        {
            flag=1;
            cout<<"-1"<<endl;
        }
        else if(n==2 && b[0]==b[1])
        {
            flag=1;
            cout<<"-1"<<endl;
        }
        else
        {
            for(int k=0;k<n;k++)
            {
                int ttt = sum;
                ttt-=b[k];
                if(ttt!=b[k])
                {
                    cout<<"1"<<endl;
                    cout<<k+1<<endl;
                    flag =1;
                    break;
                }
            }
        }
        if(flag==0)
        {
            cout<<"-1"<<endl;
        }

    }
}