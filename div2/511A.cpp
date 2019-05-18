#include<bits/stdc++.h>
using namespace std;
typedef long long int LL;
int ternarySearch(int n)
{
    int mid = n/3;

    if(n%3==0)
    {
        if(mid%3==0)
        {
            cout<<mid+2<<" "<<mid-1<<" "<<mid-1<<endl;
        }
        else
        {
            cout<<mid<<" "<<mid<<" "<<mid<<endl;
        }
    }
    else
    {
        int gap = n-mid*3; /// 1 or 2

        if(mid%3==0)
        {
            if(gap==1)
            {
                cout<<mid+2<<" "<<mid-2<<" "<<mid+1<<endl;
            }
            else
            {
                cout<<mid+2<<" "<<mid-2<<" "<<mid+2<<endl;
            }

        }
        else
        {
            if((mid+gap)%3==0)
            {
                if(gap==1)
                {
                    cout<<mid+2<<" "<<mid-1<<" "<<mid<<endl;
                }
                else
                {
                    cout<<mid+1<<" "<<mid+1<<" "<<mid<<endl;
                }
            }
            else
            {
                cout<<mid+gap<<" "<<mid<<" "<<mid<<endl;
            }

        }
    }
}
int main()
{
    int n;
    while(cin>>n)
    {
        int n3 = n/3;
        ternarySearch(n);
    }

}