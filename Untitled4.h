#include<cstring>
using namespace std;
template<typename T>
class node{
public:
    string key;
    T value;
    node<T>*next;
    node(string key,T value)
    {
        this->key=key;
        this->value=value;
    }
};
template<typename T>
class hashtable{
int cs,ts;
node<T>**bucket;
public:
int hashFn(string key)
{
    int L=key.length();int ans=0,p=1;
    for(int i=0;i<L;i++)
    {
        ans+=key[L-i-1]*p;
        p=p*37;
        p%=ts;
        ans%=ts;
    }return ans;
}
public:
    Hashtable(int ds=7)
    {
        cs=0;ts=ds;
        bucket=new node<T>*[ts];
        for(int i=0;i<ts;i++)
        {
            bucket[i]=NULL;
        }
    }
    void insert(string key,T value )
    {
        int i=hashFn(key);
        node<T>*n=new node<T>(key,value);
        n->next=bucket[i];
        bucket[i]=n;
    }
    void print()
    {

        for(int i=0;i<ts;i++)
        {
            node<T>*temp=bucket[i];
            cout<<"Bucket"<<i;
            while(temp!=NULL)
            {
                cout<<temp->key<<" ";
                temp=temp->next;
            }

        }
    }
};
