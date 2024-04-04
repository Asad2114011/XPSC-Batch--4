#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Node
{
    public:
    ll val;
    Node*left;
    Node*right;
    Node*parent;
    Node(ll val)
    {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
        this->parent=NULL;
    }
}; 
ll vertex_sum(Node*v)
{
    if(v==NULL)
    {
      return 0;
    }
    ll sum=0;
    while(v!=NULL)
    {
        sum+=v->val;
        v=v->parent;
    }
    return sum;
}
Node* input_tree(ll n)
{
    if(n<=0)
        return nullptr;

    Node* root =new Node(1);
    queue<Node*>q;
    q.push(root);

    for (ll i=2;i<=n;i++) {
        Node* p=q.front();
        q.pop();
        p->left =new Node(i);
        p->left->parent=p;
        q.push(p->left);
        i++;
        if(i<=n){
            p->right =new Node(i);
            p->right->parent=p;
            q.push(p->right);
        }
    }
    return root;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--){
    ll n;
    cin>>n;
   Node*root=input_tree(n);
   Node* v=NULL;
   queue<Node*>q;
   q.push(root);
   while(!q.empty())
   {
    Node* cur=q.front();
    q.pop();
    if(cur->val==n)
    {
        v=cur;
        break;
    }
    if(cur->left)
        q.push(cur->left);
    if(cur->right)
        q.push(cur->right);
   }
   cout<<vertex_sum(v)<<'\n';
 }
    return 0;
}