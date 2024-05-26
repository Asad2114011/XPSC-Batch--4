#include<bits/stdc++.h>
using namespace std;
class MyQueue
{
public:
    stack<int> st;
   
    void push(int x)
    {
        st.push(x);
    }

    int pop()
    {
        stack<int> newSt;
        int last;
        while (!st.empty())
        {
            int k = st.top();
            st.pop();
            if (st.empty())
            {
                // last element
                last = k;
                break;
            }
            newSt.push(k);
        }
        while (!newSt.empty())
        {
            st.push(newSt.top());
            newSt.pop();
        }
        return last;
    }

    int front()
    {
        stack<int> newSt;
        int last;
        while (!st.empty())
        {
            int k = st.top();
            st.pop();
            if (st.empty())
            {
                // last element
                last = k;
            }
            newSt.push(k);
        }
        while (!newSt.empty())
        {
            st.push(newSt.top());
            newSt.pop();
        }
        return last;
    }

    bool empty()
    {
        return st.empty();
    }
};
int main()
{
    MyQueue q;
    
    while(true)
    {
        int n;
        cin>>n;
        if(n==0){
            int x;
            cin>>x;
            q.push(x);
        }
        else if(n==1)
        {
            if(!q.empty()){
                cout<<q.front()<<'\n';
                q.pop();
            }
            else{
                cout<<"Empty"<<'\n';
            }
        }
        else if(n==2){
            if(!q.empty()){
                q.pop();
            }
        }
        else if(n==-1){
            break;
        }
    }

    return 0;
}