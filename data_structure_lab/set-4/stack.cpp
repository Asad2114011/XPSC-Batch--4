#include<bits/stdc++.h>
using namespace std;
class myStack
{
    public:
    vector<int>v;
   void push(int val)
   {
    v.push_back(val);
   } 
   void pop()
   {
    v.pop_back();
   }
   int top()
   {
    return v.back();
   }
   int size()
   {
    return v.size();
   }
   bool empty()
   {
    if(v.size()==0)
    return true;
    else return false;
   }
};
int main()
{
    myStack st;
    while(true)
    {
        int n;
        cin>>n;
        if(n==1)
        {
            cout<<"Input value:";
            int x;
            cin>>x;
            st.push(x);
        }
        else if(n==2)
        {
            if(!st.empty()){
                cout<<"Top value is:";
            cout<<st.top()<<'\n';
            st.pop();
            }
            else{
                cout<<"Empty"<<'\n';
            }
        }
        else if(n==3)
        {
            if(!st.empty()){
                st.pop();
            }
            else{
                cout<<"Empty"<<'\n';
            }
        }
        else{
            break;
        }
    }

    return 0;
}
