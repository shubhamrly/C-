#include<bits/stdc++.h>
using namespace std;
class node{
public:int data;node*left,*right;
node(int d)
{
    data=d;left=right=NULL;
}
};


 int compare(node*root1,node*root2)
{
    if(root1==NULL&&root2==NULL)
    {
        return 1;
    }
    if(root1!=NULL&&root2!=NULL){
        return(root1->data&&root2->data&&compare(root1->left,root2->left)&&compare(root1->right,root2->right));
    }

    return 0;
}

node*build(string s)
{
    if(s=="true")
    {
        int d;cin>>d;
        node*root=new node(d);
        string l;cin>>l;
        if(l=="true")
        {
            root->left=build(l);
        }
        string r;cin>>r;
        if(r=="true")
        {
            root->right=build(r);
        }
        return root;
    }
}
int main()
{
    node*root1=build("true");
    node*root2=build("true");
    if(compare(root1,root2)==1)
    {
        cout<<"true";
    }
    else{cout<<"false";}
}
