#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str="geeks for geeks geeks quiz "
                 "practice qa for";
                 unordered_map<string ,int>my;

       stringstream ss(str);
       string word;
       while(ss>>word)
       {
           my[word]++;
       }
       for(auto x:my)
       {
           cout<<x->first<<","<<x->second<<endl;
       }
}
