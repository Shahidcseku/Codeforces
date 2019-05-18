#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int coin[101],occ[101];
        for(int i=0;i<101;i++)
        {
            occ[i]=1;
        }
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            occ[temp]+=1;
        }

        int max=-1;
        for(int i=0;i<101;i++)
        {
            if(occ[i]>max)
            {
                max = occ[i];

            }
           // cout<<occ[i]<<",";
        }

        cout<<max-1<<endl;

    }

}