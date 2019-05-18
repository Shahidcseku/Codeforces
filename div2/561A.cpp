#include<bits/stdc++.h>
using namespace std;
typedef long long int LL;
int findChat(int n)
{
    int chatts=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            chatts++;
        }
    }
    return chatts;
}
int main()
{
    int n;
    cin>>n;

    int arr[26];
    memset(arr,0,sizeof(arr));
    for(int i=0;i<n;i++)
    {
        char str[22];
        cin>>str;

        arr[str[0]-97]++;
    }
    int chat=0;
    for(int i=0;i<26;i++)
    {
        if(arr[i]>2)
        {
            int split = arr[i]/2;
            chat+=findChat(split);
            chat+=findChat(arr[i]-split);
        }
    }
    cout<<chat<<endl;
}