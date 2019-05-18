#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        long long int s,a,b,c;
        cin>>s>>a>>b>>c;

        long long int canBuy = s/c;
        long long int timesBonus = canBuy/a;
        long long int total = canBuy + timesBonus*b;
        cout<<total<<endl;
    }
}