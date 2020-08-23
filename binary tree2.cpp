#include <bits/stdc++.h>
using namespace std;
class node{
public:
int key;node*left,*right;
node(int k)
{
    key=k;left=right=NULL;
}};
node*build(node*root,int k)
{
    if(root==NULL)
    {
        root=new node(k);
        return root;
    }
    if(k>root->key)
    {
        root->right=build(root->right,k);
    }
    if(k<root->key)
        {root->left=build(root->left,k);}

    return root;
}
void vop(node*root,map<int ,vector<int> >&m,int d=0)
{
    if(root==NULL){return ;}
    m[d].push_back(root->key);
    vop(root->left,m,d-1);
    vop(root->right,m,d+1);
}
void print(node*root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->key;
    print(root->left);
    print(root->right);
    return;
}
int main()
{
    node*root=NULL;root=build(root,12);build(root,4);build(root,7);build(root,14);build(root,142);build(root,134);build(root,1431);
    map<int ,vector<int> >my;int d;
    vop(root,my,d);
    for(auto it=my.begin();it!=my.end();it++)
    {
        //cout<<it->first<<",";
        for(int j=0;j<it->second.size();j++)
        {
            cout<<it->second[j]<<" ";
        }
    }
    //print (root);
}
