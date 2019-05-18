#include<bits/stdc++.h>
using namespace std;
int timeDiff(int h2,int m2)
{
    int h1=20;
    int m1 = 00;
    if(m2>m1)
    {
        h1--;
        m1+=60;
    }

    int temp = h1-h2;
    int temp1 = m1-m2;


    return temp*60 + temp1;

}
int main()
{
    int hh,mm;
    int H,D,C,N;
    double ans1=0,ans2=0;

    cin>>hh>>mm;
    cin>>H>>D>>C>>N;

    int ff =0;
    if(H%N!=0)
    {
        ff = H/N + 1;
    }
    else
    {
        ff = H/N;
    }
    ans1 = ff*C;
    if(hh>=20)
    {
         ans2 = ans1 - ans1*(20.00/100.00);
    }
    else
    {
        int diff = timeDiff(hh,mm);

        int nn =0;
        if((H+D*diff)%N!=0)
        {
            nn = (H+D*diff)/N + 1;
        }
        else
        {
            nn = (H+D*diff)/N;
        }
        ans2 = nn*C;
        ans2 = ans2 - ans2*(20.00/100.00);
    }

    if(ans1<ans2)
    {
        printf("%.4lf\n",ans1);
    }
    else
    {
         printf("%.4lf\n",ans2);
    }


}