#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
    int n,x,y;
    cin>>n>>x>>y;
    char num[n];
    cin>>num;
    reverse(num, num + n);
    //cout<<num;

    int op = 0;
    for(int i=0;i<x;i++)
    {
        if(num[i]=='1' && i!=y)
        {
            op++;
        }
        else if(num[i]=='0' && i==y)
        {
            op++;
        }
    }
    cout<<op<<endl;
}