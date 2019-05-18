#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[60];
    int n;
    cin>>n;
    cin>>str;
    int val = 0;
    for(int i=0;i<n;i++)
    {
        val += i;
        if(val<n)
        {
            cout<<str[val];
        }
        else
        {
            break;
        }
    }

}