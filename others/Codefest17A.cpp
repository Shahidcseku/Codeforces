#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int test;
    cin>>test;
    char name[test][104];
    for(int i=0;i<test;i++)
    {

        scanf("%s",&name[i]);
    }

    for(int i=0;i<test;i++)
    {
        int flag=0;
        for(int j=0;j<i;j++)
        {
            if(strcmp(name[i],name[j])==0)
            {
                cout<<"YES"<<endl;
                flag = 1;
                break;
            }


        }
        if(flag==0)
        cout<<"NO"<<endl;
    }

}