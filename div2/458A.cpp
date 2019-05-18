#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
    int n;
    long long int arr[1001];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&arr[i]);
    }
    sort(arr,arr+n,greater<int>());
    for(int i=0;i<n;i++)
    {
        long int sq = sqrt(arr[i]);
        if(arr[i]!=sq*sq)
        {
            printf("%lld",arr[i]);
            break;
        }
    }

}