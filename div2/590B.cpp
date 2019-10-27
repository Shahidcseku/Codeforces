#include<bits/stdc++.h>
#include <algorithm>
#include <queue>
using namespace std;

void reverseQueue(queue<int>& Queue)
{
    stack<int> Stack;
    while (!Queue.empty())
    {
        Stack.push(Queue.front());
        Queue.pop();
    }
    while (!Stack.empty())
    {
        Queue.push(Stack.top());
        Stack.pop();
    }
}
int main()
{
    int n,k;
    cin>>n>>k;

    int id;
    queue<int> screen,q;

    for(int i=0;i<n;i++)
    {
        cin>>id;

        int f=0;
        q = screen;

        while (!q.empty())
        {
            if(q.front()==id)
            {
                f=1;
                break;
            }
            q.pop();
        }
        if(f)
        {
            continue;
        }
        else if(screen.size()<k)
        {
            screen.push(id);
        }
        else
        {
            screen.pop();
            screen.push(id);
        }
    }

    cout<<screen.size()<<endl;

    reverseQueue(screen);
    while (!screen.empty())
    {
        cout<<screen.front()<<" ";
        screen.pop();
    }

}
