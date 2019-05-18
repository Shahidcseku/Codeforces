#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+n);

    int min=arr[0], loss=0,x = 1, att=n-1;

    for(int i=n-1;i>0;i--)
    {
        int max = arr[i];
        //cout<<" max = "<<max<<endl;
        for(int j=2;j<=100;j++)
        {

            if(max%j==0)
            {
                int temp = (max+min)-((max/j)+(min*j));
//                cout<<"temp "<<temp<<endl;
                if(temp>loss)
                {
                    loss = temp;
                    x = j;  // Divided by
                    att = i; // Divided index
                }

            }
        }
    }

    int result = arr[0]*x;
    for(int i=1;i<n;i++)
    {
        if(i==att)
        {
            result += arr[i]/x;
        }
        else
        {
            result += arr[i];
        }

    }
//    cout<<x<<" at "<<att<<endl;
    cout<<result<<endl;
}