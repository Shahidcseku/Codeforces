#include<bits/stdc++.h>
using namespace std;

char tile[50][50];
int fillNeighbor(int i, int j)
{
    if(tile[i-1][j]=='.' && tile[i][j-1]=='.' && tile[i+1][j]=='.' && tile[i][j+1]=='.')
    {
        tile[i][j]='#';
        tile[i-1][j]='#';
        tile[i][j-1]='#';
        tile[i+1][j]='#';
        tile[i][j+1]='#';
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>tile[i][j];
        }
    }
    int fail = 0;
    for(int i=1;i<n-1;i++)
    {
        for(int j=1;j<n-1;j++)
        {
            if(tile[i][j]=='.')
            {
                fail = fillNeighbor(i,j);
            }
        }
    }
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(tile[i][j]=='.')
            {
                fail = 1;
                break;
            }
        }
        if(fail)
        {
            break;
        }
    }
    if(fail)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }

}