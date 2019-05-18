#include<bits/stdc++.h>
using namespace std;
int n;
char s[55],t[55];
vector<int> moves;
int findPos(char t,int i)
{
    for(int j=i;j<n;j++)
    {
        if(s[j]==t)
        {
            return j;
        }
    }
    return -1;
}
void swapS(int from,int to)
{
    for(int i=from;i>to;i--)
    {
        swap(s[i],s[i-1]);
        moves.push_back(i);
    }
}
int main()
{
    cin>>n;
    cin>>s>>t;

    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]!=t[i])
        {
            /// Find ti is s
            int pos = findPos(t[i],i);
            if(pos==-1)
            {
                flag = 1;
                break;
            }
            else
            {
                swapS(pos,i);
            }
        }
    }

    if(flag==1)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        vector<int> :: iterator i;
        cout<<moves.size()<<endl;
        for(i=moves.begin(); i!=moves.end();i++)
        {
            cout<<*i<<" ";
        }
    }
}