#include<bits/stdc++.h>
using namespace std;
typedef long long int LL;
int main()
{
    char s[200];
    int t;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        cin>>s;
        int small=0,cap=0,num=0;
        for(int i=0;i<strlen(s);i++)
        {
            if(s[i]=='A' || s[i]=='B' || s[i]=='C' || s[i]=='D' || s[i]=='E' || s[i]=='F' || s[i]=='G' || s[i]=='H' || s[i]=='I' || s[i]=='J' || s[i]=='K' || s[i]=='L' || s[i]=='M' || s[i]=='N' || s[i]=='O' || s[i]=='P' || s[i]=='Q' || s[i]=='R' || s[i]=='S' || s[i]=='T' || s[i]=='U' || s[i]=='V' || s[i]=='W' || s[i]=='X' || s[i]=='Y' || s[i]=='Z')
            {
                cap+=1;
            }
            else if(s[i]=='a' || s[i]=='b' || s[i]=='c' || s[i]=='d' || s[i]=='e' || s[i]=='f' || s[i]=='g' || s[i]=='h' || s[i]=='i' || s[i]=='j' || s[i]=='k' || s[i]=='l' || s[i]=='m' || s[i]=='n' || s[i]=='o' || s[i]=='p' || s[i]=='q' || s[i]=='r' || s[i]=='s' || s[i]=='t' || s[i]=='u' || s[i]=='v' || s[i]=='w' || s[i]=='x' || s[i]=='y' || s[i]=='z')
            {
                small += 1;
            }
            else if(s[i]=='1' || s[i]=='2' || s[i]=='3' || s[i]=='4' || s[i]=='5' || s[i]=='6' || s[i]=='7' || s[i]=='8' || s[i]=='9' || s[i]=='0')
            {
                num += 1;
            }
        }
        if(cap>0 && small>0 && num>0)
    {
        cout<<s<<endl;
    }
    else
    {
        if(cap==0 && small==0 && num==0)
        {
            cout<<"Aa1";
            for(int i=3;i<strlen(s);i++)
            {
                cout<<s[i];
            }
            cout<<endl;
        }
        else if(cap==0 && small==0 && num>=1)
        {
            cout<<"Aa";
            for(int i=2;i<strlen(s);i++)
            {
                cout<<s[i];
            }
            cout<<endl;
        }
        else if(cap==0 && small>=1 && num==0)
        {
            cout<<"A1";
            for(int i=2;i<strlen(s);i++)
            {
                cout<<s[i];
            }
            cout<<endl;
        }
        else if(cap>=1 && small==0 && num==0)
        {
            cout<<"a1";
            for(int i=2;i<strlen(s);i++)
            {
                cout<<s[i];
            }
            cout<<endl;
        }
        else if(cap==0 && small>0 && num>0)
        {
            for(int i=0;i<strlen(s);i++)
            {
                if(small>1 && (s[i]=='a' || s[i]=='b' || s[i]=='c' || s[i]=='d' || s[i]=='e' || s[i]=='f' || s[i]=='g' || s[i]=='h' || s[i]=='i' || s[i]=='j' || s[i]=='k' || s[i]=='l' || s[i]=='m' || s[i]=='n' || s[i]=='o' || s[i]=='p' || s[i]=='q' || s[i]=='r' || s[i]=='s' || s[i]=='t' || s[i]=='u' || s[i]=='v' || s[i]=='w' || s[i]=='x' || s[i]=='y' || s[i]=='z'))
                {
                    s[i] = 'A';
                    break;
                }
                else if(num>1 && (s[i]=='1' || s[i]=='2' || s[i]=='3' || s[i]=='4' || s[i]=='5' || s[i]=='6' || s[i]=='7' || s[i]=='8' || s[i]=='9' || s[i]=='0'))
                {
                    s[i] = 'A';
                    break;
                }
            }
            cout<<s<<endl;
        }
        else if(cap>0 && small==0 && num>0)
        {
            for(int i=0;i<strlen(s);i++)
            {
                if(cap>1 && (s[i]=='A' || s[i]=='B' || s[i]=='C' || s[i]=='D' || s[i]=='E' || s[i]=='F' || s[i]=='G' || s[i]=='H' || s[i]=='I' || s[i]=='J' || s[i]=='K' || s[i]=='L' || s[i]=='M' || s[i]=='N' || s[i]=='O' || s[i]=='P' || s[i]=='Q' || s[i]=='R' || s[i]=='S' || s[i]=='T' || s[i]=='U' || s[i]=='V' || s[i]=='W' || s[i]=='X' || s[i]=='Y' || s[i]=='Z'))
                {
                    s[i] = 'a';
                    break;
                }
                else if(num>1 && (s[i]=='1' || s[i]=='2' || s[i]=='3' || s[i]=='4' || s[i]=='5' || s[i]=='6' || s[i]=='7' || s[i]=='8' || s[i]=='9' || s[i]=='0'))
                {
                    s[i] = 'a';
                    break;
                }
            }
            cout<<s<<endl;
        }
        else if(cap>0 && small>0 && num==0)
        {
            for(int i=0;i<strlen(s);i++)
            {
                if(cap>1 && (s[i]=='A' || s[i]=='B' || s[i]=='C' || s[i]=='D' || s[i]=='E' || s[i]=='F' || s[i]=='G' || s[i]=='H' || s[i]=='I' || s[i]=='J' || s[i]=='K' || s[i]=='L' || s[i]=='M' || s[i]=='N' || s[i]=='O' || s[i]=='P' || s[i]=='Q' || s[i]=='R' || s[i]=='S' || s[i]=='T' || s[i]=='U' || s[i]=='V' || s[i]=='W' || s[i]=='X' || s[i]=='Y' || s[i]=='Z'))
                {
                    s[i] = '1';
                    break;
                }
                else if(small>1 && (s[i]=='a' || s[i]=='b' || s[i]=='c' || s[i]=='d' || s[i]=='e' || s[i]=='f' || s[i]=='g' || s[i]=='h' || s[i]=='i' || s[i]=='j' || s[i]=='k' || s[i]=='l' || s[i]=='m' || s[i]=='n' || s[i]=='o' || s[i]=='p' || s[i]=='q' || s[i]=='r' || s[i]=='s' || s[i]=='t' || s[i]=='u' || s[i]=='v' || s[i]=='w' || s[i]=='x' || s[i]=='y' || s[i]=='z'))
                {
                    s[i] = '1';
                    break;
                }
            }
            cout<<s<<endl;
        }
    }
    }

}