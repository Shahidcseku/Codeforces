#include<bits/stdc++.h>
typedef long long int LL;
using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
    char str[201];
    while(cin>>str)
    {
        int len = strlen(str);
        int flag=0;
        for(int i=0;i<len;i++)
        {
            if(flag==1) break;
            if(str[i]!='a' && str[i]!='e'&& str[i]!='i' && str[i]!='o' && str[i]!='u' && str[i]!='n')
            {
                if( (str[i+1]=='a' || str[i+1]=='e' || str[i+1]=='i' || str[i+1]=='o' || str[i+1]=='u'))
                {
                     continue;
                }
                else
                {
                    flag=1;
                    break;
                }
               
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

}