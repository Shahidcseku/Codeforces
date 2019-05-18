#include<bits/stdc++.h>
using namespace std;
typedef long long int LL;

int main()
{
    int n;
    char p[101];
    cin>>n;
    cin>>p;

    int pile=0;
    for(int i=0;i<n;i++)
    {
        if(pile==0 && p[i]=='-')
        {
            continue;
        }
        else if(p[i]=='+')
        {
            pile++;
        }
        else if(p[i]=='-')
        {
            pile--;
        }
        if(pile<0)
        {
            pile=0;
        }
    }
    cout<<pile<<endl;
}