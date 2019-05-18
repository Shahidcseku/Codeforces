By islamshahidul, contest: Codecraft-18 and Codeforces Round #458 (Div. 1 + Div. 2, combined), problem: (B) Conan and Agasa play a Card Game, Accepted, #
 #include<stdio.h>
#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
    long long int n;
    long long int arr[100001],freq[100001];
    scanf("%lld",&n);
    for(long long int i=0;i<n;i++)
    {
        scanf("%lld",&arr[i]);
    }
    sort(arr,arr+n,greater<long long int>());

    long long int decide=1;
    for(long long int i=1;i<n;i++)
    {
        if(arr[i]==arr[i-1])
        {
            decide++;
        }
        if(arr[i]!=arr[i-1])
        {
            if(decide%2!=0)
            {
                break;
            }
            else
            {
                decide=1;
            }
        }

    }
    if(decide%2==0)
    {
        cout<<"Agasa"<<endl;
    }
    else
    {
        cout<<"Conan"<<endl;
    }

}