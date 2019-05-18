#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char arr[n];
    cin>>arr;

    string s="";
    int del=0, cursor=1,odd=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==arr[i+1] && cursor%2==1)
        {
            del++;
        }
        else
        {
            s+=arr[i];
            cursor++;
        }
    }
    if(s.size()%2==1)
    {
        s.pop_back();
        del++;
    }
    cout<<del<<endl;
    cout<<s<<endl;
}