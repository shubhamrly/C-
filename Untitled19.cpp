#include <bits/stdc++.h>
using namespace std;
class node{
public:int data;node*left,*right;
node(int k)
{
    data=k;
    left=right=NULL;

}
};
node*build(node*root,int k)
{
    if(root==NULL)
    {
        root=new node(k);return root;
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
void print(node*root)
{
    if(root==NULL){return ;}
    cout<<root->data;
    print(root->left);
    print(root->right);
    return ;
}
int main()
{
    node*root=NULL;
  *root=    build(root,12); build(&root,14);build(root,84);build(root,87);
    print(root);
}
