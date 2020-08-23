#include<bits/stdc++.h>
using namespace std;
class node{
public:int data;node*left,*right;
node(int d)
{
    data=d;left=right=NULL;
}
};
node *build()
{   int t,d;
    cin>>t;cin>>d;
    node*root=new node(t);
    if(d==2)
    {
        root->left=build();
        root->right=build();
    }
    if(d==0)
    {
        root->left=NULL;
        root->right=NULL;
    }
    return root;

}
void print (node*root)
{
    if(root==NULL){return ;}
    cout<<root->data<<" ";
    print(root->left);
    print(root->right);
}
int ksum(node*root,int k)
{   int sum=0;
    if(root==NULL){return 0;}
    if(k==0){sum+=root->data;}
    if(k<1){return 0;}
    ksum(root->left,k-1);
    ksum(root->right,k-1);
    return sum;
}
int main()
{
    node*root=NULL;
    root=build();
    print(root);
    cout<<endl;
    cout<<ksum(root,0);
}
