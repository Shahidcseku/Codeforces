#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    char str[65001];
    cin>>n;
    cin>>str;

    int sum=0;
    for(int i=0;i<n;i++)
    {
        if((str[i]-'0')%2==0)
        {
            sum += (i+1);
        }
    }
    cout<<sum<<endl;

}