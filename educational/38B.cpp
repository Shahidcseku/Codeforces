#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n;
    int pos[100000];
    cin>>n;

    for(long int i=0;i<n;i++)
    {
        cin>>pos[i];
    }

    long int big1=0,big2=0;
    for(long int i=0;i<n;i++)
    {
        if(pos[i]>500000)
        {
            big2 = pos[i];

            break;
        }
        else
        {
            int temp= pos[i];
            //cout<<temp<<endl;
            big1 = pos[i];
        }
    }
    if(big2==0)
    {
        big2=1000000;
    }
    //cout<<big1<<" --- "<<big2<<endl;

    long int ans = max(big1-1,1000000-big2);
    cout<<ans<<endl;

}