#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int k,yes=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>k;
        if(k>0)
        {
            yes=1;
        }
    }
    if(yes)
    {
        cout<<"HARD"<<endl;
    }
    else
    {
        cout<<"EASY"<<endl;
    }
}