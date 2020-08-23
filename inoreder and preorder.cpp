#include<bits/stdc++.h>
using namespace std;
class node
{
    public:int data;node*left,*right;
    node(int d)
    {
        data=d;left=right=NULL;
    }
};
node*create(int *in,int *pre,int s,int e)
{
if(s>e){return NULL;}
static int i=0;
node*root=new node(pre[i]);
int index=-1;
for(int j=s;j<=e;j++)
{
    if(in[j]==pre[i])
    {
        index=j;break;
    }
}i++;
root->left=create(in,pre,s,index-1);
root->right=create(in,pre,index+1,e);
return root;
}
void level(node*root)
{
    queue<node*>q;
    q.push(root);q.push(NULL);
    while(!q.empty())
    {
        node*f=q.front();
        if(f==NULL)
        {
            cout<<endl;q.pop();
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else{
            cout<<f->data<<",";
            q.pop();
            if(f->left)
            {
                q.push(f->left);
            }
            if(f->right)
            {
                q.push(f->right);
            }

        }
    }
}
void print(node*root)
{
    if(root==NULL){return ;}
    cout<<root->data<<endl;
    print (root->left);
    print(root->right);
}
int main()
{
    int in[]={3,2,8,4,1,6,7,5};
    int pre[]={1,2,3,4,8,5,6,7};
    int n=8;
    int s=0,e=n-1;
    node*root=create(in,pre,s,e);
    level(root);
    print(root);
}
