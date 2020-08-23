#include<cstring>
using namespace std;
template<typename t>
class node
{
    public:string key;t value;
    node<t>*next;
    node(string k,t v)
    {
        this->key=k;
        value=v;
    }
};
class hashtable
{
    int cs,ts;node<t>**bucket;
    int hashfn(string key)
    {
        int l=key.length();
        int ans=0,p=1;
        for(int i=0;i<l;i++)
        {
            ans+=key[l-i-1]*p;
            p=p*37;p=p%ts;
        }return ans;
    }
public:
    hashtable(int ds=7)
    {
        cs=0;ts=ds;
        bucket=new node<t>*[ts];
        for(int i=0;i<ts;i++)
        {
            bucket[i]=NULL;
        }
    }
    void insert(string s,t key)
    {
        int i=hashfn(key);
        node<t>*n=new node<t>(key,value);
        n->next=bucket[i];
        bucket[i]=n;
    }
    void print ()
    {
        for(int i=0;i<ts;i++)
        {
            node<t>*temp=bucket[i];
            cout<<i<<" ";
            while(temp!=NULL)
            {
                cout<<temp->key<<" "<<temp->value<<" ";
                temp=temp->next;
            }
        }
    }
};
