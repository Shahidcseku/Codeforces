#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    vector<int> num;
    cin>>n;
    int t;
    for(int i=0;i<n;i++)
    {
        cin>>t;
        num.push_back(t);
    }
    long long int sum = num[n-1];
    int temp = sum;

    for(int i=n-2;i>=0;i--)
    {
        if(temp==0)
        {
            break;
        }
        if(num[i]<temp)
        {
            sum+= num[i];
            temp = num[i];
        }
        else
        {
            sum+= temp-1;
            temp--;
        }
        //cout<<temp;
    }
    cout<<sum<<endl;

}