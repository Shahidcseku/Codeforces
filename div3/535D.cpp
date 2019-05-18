#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    char col[n];
    for(int i=0;i<n;i++)
    {
        cin>>col[i];
    }

    int count=0;
    for(int i=0;i<n-1;i++)
    {
        if(col[i]==col[i+1] && (i+1)!=(n-1))
        {
            /// Alter
            count++;

            if(col[i]=='R')
            {
                if(col[i+2]=='G')
                {
                    col[i+1] = 'B';
                }
                else if(col[i+2]=='B')
                {
                    col[i+1] = 'G';
                }
                else if(col[i+2]=='R')
                {
                    col[i+1] = 'G';
                }
            }
            else if(col[i]=='G')
            {
                if(col[i+2]=='R')
                {
                    col[i+1] = 'B';
                }
                else if(col[i+2]=='B')
                {
                    col[i+1] = 'R';
                }
                else if(col[i+2]=='G')
                {
                    col[i+1] = 'B';
                }
            }
            else if(col[i]=='B')
            {
                if(col[i+2]=='R')
                {
                    col[i+1] = 'G';
                }
                else if(col[i+2]=='G')
                {
                    col[i+1] = 'R';
                }
                else if(col[i+2]=='B')
                {
                    col[i+1] = 'R';
                }
            }
        }
        if(col[i]==col[i+1] && (i+1)==(n-1))
        {
            /// Alter
            count++;

            if(col[i]=='B')
            {
                col[i+1] = 'R';
            }
            else if(col[i]=='G')
            {
                col[i+1] = 'R';
            }
            else if(col[i]=='R')
            {
                col[i+1] = 'B';
            }
        }
    }

    cout<<count<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<col[i];
    }

}