#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[200005],str1[200005];
    while(cin>>str>>str1)
    {
        int x = strlen(str);
        int y = strlen(str1);

        int match=0;
        int i=x-1;
        int j=y-1;
        while(str[i]==str1[j] && (i>=0 && j>=0))
        {
            match++;
            i--;
            j--;
        }
       // cout<<match<<" "<<x<<" "<<y<<endl;

        cout<<(x-match)+(y-match)<<endl;
    }

}