#include<iostream>
#include<string>
using namespace std;

template<class T>
class Stack
{
    int* arr;
    int Top;

    public:
        int n=100;
        Stack()
        {
            arr = new T[100];
            Top = -1;
        }

        void push(T x)
        {
            if(Top==n-1)
            {
                cout<<"Stack is full"<<endl;
                return;
            }
            Top++;
            arr[Top] = x;
        }
        void pop()
        {
            if(Top==-1)
            {
                cout<<"Stack is empyt"<<endl;
                return;
            }
            Top--;
        }
        bool empty()
        {
            if(Top==-1)
                return 1;
            return 0;
        }
        T top()
        {
            if(Top==-1)
            {
                cout<<"Stack is empty"<<endl;
                return -1;
            }
            return arr[Top];
        }
        void display()
        {
            for(int i=Top; i>-1; i--)
            {
                cout<<"|___ "<<arr[i]<<endl;
            }
            cout<<endl;
        }
};


int prefix(char arr[],int n)
{
    Stack<int> std;
    for(int i=0; i<n; i++)
    {
        if((int)arr[i]>=48 && (int)arr[i]<=57)
        {
            std.push(arr[i] - '0');
        }
        else
        {
            int num1 = std.top();
            std.pop();
            int num2 = std.top();
            std.pop();
            if(arr[i]=='+')
                std.push(num1+num2);
            else if(arr[i]=='*')
                std.push(num1*num2);
            else if(arr[i]=='/')
                std.push(num2/num1);
            else if(arr[i]=='-')
                std.push(num2-num1);
        }  
    }
    return std.top();
}

int main()
{
    string s;
    cin>>s;
    int n = s.length();
    char arr[n];
    for(int i=0; i<n; i++)
    {
        arr[i] = s[i];
    }
    cout<<prefix(arr,n);
    return 0;
}
