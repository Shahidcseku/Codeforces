#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    char str[101];
    cin>>n;
    cin>>str;

    int len = strlen(str);

    for(int i=0;i<len;i++)
    {
        if(str[i]=='R' && str[i+1]=='U')
        {
            str[i] = 'D';
            str[i+1] = 'X';
            i++;
        }
        else if(str[i]=='U' && str[i+1]=='R')
        {
            str[i] = 'D';
            str[i+1] = 'X';
            i++;
        }
    }
    int mov = 0;
    for(int i=0;i<len;i++)
    {
        if(str[i]!='X')
        {
            mov++;
        }
    }
    cout<<mov<<endl;
}