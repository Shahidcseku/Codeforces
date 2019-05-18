#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    char str[110];
    cin>>n;
    cin>>str;

    str[n] = 'X';
    str[n+1] = 'H';

    int flag = 0;
    for(int i=0;i<n-1;i++)
    {
        if(str[i]==str[i+1] && str[i]!='?')
        {
            cout<<"No"<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
         for(int i=0;i<n-1;i++)
        {
            if(str[0]=='?' || str[n-1]=='?')
            {
                cout<<"Yes"<<endl;
                flag = 1;
                break;
            }
            else
            {
                if(str[i]=='?' && str[i+1]==str[i-1])
                {
                    cout<<"Yes"<<endl;
                    flag = 1;
                    break;
                }
                else if(str[i]=='?' && str[i+1]=='?' && str[i-1]==str[i+2])
                {
                    cout<<"Yes"<<endl;
                    flag = 1;
                    break;
                }
                else if(str[i]=='?' && str[i+1]=='?' && str[i+2]=='?')
                {
                    cout<<"Yes"<<endl;
                    flag = 1;
                    break;
                }
            }
        }
    }
    if(flag==0)
    {
        cout<<"No"<<endl;
    }
}