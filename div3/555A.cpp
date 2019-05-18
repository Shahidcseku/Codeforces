#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int c=0;
    while(n>=10)
    {
        n++;
        c++;
        while(n%10==0)
        {
            n=n/10;
        }
    }
    cout<<c+9<<endl;

}