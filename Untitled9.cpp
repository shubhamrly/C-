#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;
int main() {
    unordered_map<string,int>my;
    my["Mango"]=100;
    pair<string,int>p("Guava",120);
    my.insert(p);
    my.insert(make_pair("LUND",98));
    for(auto x:my)
    {
        cout<<x.first<<","<<x.second<<endl;
    }
    cout<<my.bucket_count()<<endl;
    for(auto i=0;i<my.bucket_count();i++){
    cout<<"here "<<i<<"::";
    for(auto it=my.begin(i);it!=my.end(i);it++)
    {
        cout<<it->first<<","<<it->second<<" ";
    }
    cout<<endl;
    }
}

