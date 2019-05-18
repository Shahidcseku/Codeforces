#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int l1[n],r1[n],l2[n],r2[n];
    for(int i=0;i<n;i++)
    {
        cin>>l1[i]>>r1[i]>>l2[i]>>r2[i];
    }
    for(int i=0;i<n;i++)
    {
        int left1 = l1[i];
        int right1 = r1[i];
        int left2 = l2[i];
        int right2 = r2[i];

        int j,k;
        int flag=0;
        for(j=left1; j<=right1;j++)
        {
            for(k=right2; k>=left2;k--)
            {
                if(j!=k)
                {
                    cout<<j<<" "<<k<<endl;
                    flag = 1;
                    break;
                }
            }
            if(flag==1)
            {
                break;
            }
        }
    }
}