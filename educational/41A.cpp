#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n,m;
   int block[1001];
   int cnt[1001];


   cin>>n>>m;

    for(int i=0;i<n;i++)
   {
       cnt[i] = 0;
   }
    int temp;
   for(int i=0;i<m;i++)
   {
       cin>>temp;
       cnt[temp-1] += 1;
   }

   sort(cnt,cnt+n);
   cout<<cnt[0]<<endl;




}