#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int ans,n,temp;
    cin>>n;

    ans= 0;
    ans+=(n/100);
    temp = n%100;
    ans+= temp/20;
    temp = n%20;
    ans+= temp/10;
    temp = n%10;
    ans+= temp/5;
    temp = n%5;
    ans+= temp;

    cout<<ans<<endl;




}