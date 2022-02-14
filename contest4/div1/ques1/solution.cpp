#include<iostream>
#include<cstdio>
#include <stack>
#include <queue>
#include<string>
using namespace std;

void InsertAtBottom(stack<int> &std, int ele)
{
    if(std.empty())
    {
        std.push(ele);
        return;
    }
    int val = std.top();
    std.pop();
    InsertAtBottom(std,ele);
    std.push(val);
}

void reverseStack(stack<int> &std)
{
    if(std.empty())
        return;
    
    int val = std.top();
    std.pop();
    reverseStack(std);
    InsertAtBottom(std,val);
    
}

void Rearrange(queue<int> &q,int n)
{
    stack<int> std;
    for(int i=0; i<n/2; i++)
    {
        std.push(q.front());
        q.pop();
    }
    reverseStack(std);
    while(!std.empty())
    {
        q.push(std.top());
        std.pop();
        q.push(q.front());
        q.pop();
    }
}

int main()
{
    int N;
    cin >> N;
    queue<int> q;
    bool flag = true;
    for(int i=0; i<N; i++)
    {
        int n;
        cin>>n;
        string s = to_string(n);
        if((s[0]=='4' && i<N/2) || (s[0]=='7' && i>=N/2 && i<N))
            q.push(n);
        else
        {
            q.push(n);
            flag = false;
        }
    }
    if(flag==false)
    {
        cout<<"Invalid Input";
        return 0;
    }
    stack<int> std;
    Rearrange(q,N);
    for(int i=0; i<N; i++)
    {
        cout<<q.front()<<endl;
        q.pop();
    }
}
