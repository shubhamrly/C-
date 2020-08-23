#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<int ,int>my;
    int a[]={2,3,2,2,2,2,4,4,4,5,6,34},n=sizeof(a)/sizeof(int);
    for(int i=0;i<n;i++)
    {
        if(my.find(a[i])==my.end())
        {
            cout<<a[i]<<" ";
        }
        my[a[i]]=true;
    }

}

