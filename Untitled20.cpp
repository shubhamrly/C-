#include <bits/stdc++.h>
using namespace std;
class node
{
    public:int data;node*left,*right;
    node(int k)
    {
        data=k;
        left=NULL;
        right=NULL;
    }
};
node*build(node*root,int k)
{
    if(root==NULL)
    {
        node*temp=new node(k);
        return temp;
    }
    if(k<root->data)
    {
        root->left=build(root->left,k);

    }
    if(k>root->data)
    {
        root->right=build(root->right,k);
    }
    return root;
}
void print (node*root)
{
    if(root!=NULL)
    {
    cout<<root->data;print (root->left);
    print(root->right);

}}
int main()
{
    node*root=NULL;
    root=build(root,10);
    build(root,11);
    print(root);
}
