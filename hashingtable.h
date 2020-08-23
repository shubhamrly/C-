#include<cstring>
using namespace std;

template<typename T>
class node{
public:
    string key;
    T value;
    node<T> *next;

    node(string key,T v){
        this->key = key;
        value = v;
    }
};

template<typename T>
class Hashtable{
    int cs; ///Current Size
    int ts; ///Max Arr Size
    node<T>** buckets;

    int hashFn(string key){
        int L = key.length();
        int ans =0 ;
        int p = 1; ///37^0 is 1 initially

        for(int i=0;i<L;i++){
            ans += key[L-i-1]*p;
            p = p*37;

            p %= ts;
            ans %= ts;
        }
        return ans;
    }

public:
    void rehash()
    {
        node<T>**oldb=buckets;
        int oldts=ts;
        ts=2*ts;
        cs=0;
        buckets=new node<T>*[ts];
        for(int i=0;i<ts;i++)
        {
            buckets[i]=NULL;
        }
        for(int i=0;i<oldts;i++)
        {
            node<T>*temp=oldb[i];
            while(temp!=NULL)
            {
                insert(temp->key,temp->value);
                temp=temp->next;
            }
            delete oldb[i];
        }
        delete[] oldb;
    }
    Hashtable(int ds=7){
        cs = 0;
        ts = ds;
        buckets = new node<T>*[ts];
        ///Make all addresses as NULL
        for(int i=0;i<ts;i++){
            buckets[i] = NULL;
        }
    }

    void insert(string key,T value){
        ///Key i need the hash-index
        int i = hashFn(key);

        node<T>*n = new node<T>(key,value);
        n->next = buckets[i];
        buckets[i] = n;
        cs++;
        float lf=(float)cs/ts;
        cout<<endl<<lf<<endl;
        if(lf>0.7)
        {
            cout<<"\nlf::"<<lf;
            rehash();
        }

    }
    ///Print it
    void print(){
        ///Iterate over buckets array
        for(int i=0;i<ts;i++){
            ///Print the LL for each buckets
            node<T>*temp = buckets[i];
            cout<<"Bucket "<<i<<"->";
            while(temp!=NULL){
                cout<<temp->key<<","<<temp->value<<" ";
                temp = temp->next;
            }
            cout<<endl;
        }
    }
T *search(string key)
{
    int i=hashFn(key);
    node<T>*temp=buckets[i];
    while(temp!=NULL)
    {
        if(temp->key==key)
        {
            return &(temp->value);
        }
        temp=temp->next;
    }
    return NULL;
}
T  &operator[](string key)
   {
       T *temp=search(key);
       if(temp==NULL){

           T garbage;
           insert(key,garbage);

           T *value=search(key);
           return( *value);
       }
       return *temp;
   }
   bool check(int i,string key)
   {
       node<T>*temp=buckets[i];
       while(temp!=NULL)
       {
           if(temp->key==key)
           {
               return true;
           }
           temp=temp->next;
       }

           return false;
   }
   void delet(string s)
   {
       int i=hashFn(s);
       if(!check(i,s))
       {
           return;
       }
       node<T>*temp=buckets[i];
       if(temp->key==s)
       {
           node<T>*n=temp->next;
           delete(temp);
           buckets[i]=n;

       return;
       }
       else{
        while(temp!=NULL)
        {
            if(temp->next->key==s)
            {
                break;
            }
            temp=temp->next;
        }
        node<T>*n=temp->next->next;
        delete(temp->next);
        temp->next=n;
        return ;
       }
   }
};







