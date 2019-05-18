#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int max = a[0];
        float sum = 0;
        for (int i=0; i<n; i++)
        {
            sum+=a[i];
            if (max<a[i])
            {
                max = a[i];
            }
        }
        int min = ceil((sum+m)/n);
        if(max>min)
        {
            min = max; /// Code dekhle confused hoye jabe manush... :-P
        }

        cout<<min<<" "<<max+m<<endl;


    }
}