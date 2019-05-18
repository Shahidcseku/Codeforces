#include<bits/stdc++.h>
using namespace std;
typedef long long int LL;
int main()
{
    int a=0,b=0,c=0,d=0,e=0,f=0,ab,bc,de,ef;
    int arr[] = {4 , 8, 15, 16, 23, 42};

    cout<<"? 1 2"<<endl;
    fflush(stdout);
    cin>>ab;
    cout<<"? 2 3"<<endl;
    fflush(stdout);
    cin>>bc;

    cout<<"? 4 5"<<endl;
    fflush(stdout);
    cin>>de;
    cout<<"? 5 6"<<endl;
    fflush(stdout);
    cin>>ef;


    int a1,b1,b2,c1,d1,e1,e2,f1;
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)
        {
            if(arr[i]*arr[j]==ab)
            {
                a1 = arr[i];
                b1 = arr[j];
            }
            if(arr[i]*arr[j]==bc)
            {
                b2 = arr[i];
                c1 = arr[j];
            }

            if(arr[i]*arr[j]==de)
            {
                d1 = arr[i];
                e1 = arr[j];
            }

            if(arr[i]*arr[j]==ef)
            {
                e2 = arr[i];
                f1 = arr[j];
            }
        }
    }
    // cout<<a1<<" "<<b1<<" "<<b2<<" "<<c1<<endl;
    ///finding a, b, c
    if(a1==b2)
    {
        a = b1;
        b = a1; ///or b2
        c = c1;
    }
    else if(a1==c1)
    {
        a = b1;
        b = a1; /// or c1
        c = b2;

    }
    else if(b1==b2)
    {
        a = a1;
        b = b1;
        c = c1;
    }
    else if(b1==c1)
    {
        a = a1;
        b = c1; //or b1
        c = b2;
        // cout<<a<<b<<c<<endl;
    }

    ///finding d,e,f;

    if(d1==e2)
    {
        d = e1;
        e = d1; ///or e2
        f = f1;
    }
    else if(d1==f1)
    {
        d = e1;
        e = d1; /// or f1
        f = e2;
    }
    else if(e1==e2)
    {
        d = d1;
        e = e1; ///or e2
        f = f1;
    }
    else if(e1==f1)
    {
        d = d1;
        e = e1;
        f = e2; /// or b2
    }

    cout<<"! "<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<endl;
    fflush(stdout);
}