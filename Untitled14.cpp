#include<bits/stdc++.h>
using namespace std;
void print (int a[],int n)
{
    unordered_map<int ,bool>m;
    for(int i=0;i<n;i++)
    {
        if(m.find(a[i])==m.end())
        {
            cout<<a[i]<<" ";
        }
        m[a[i]]=true;
    }
}
int main()
{
    int a[]={5,2,13,5,3,2},n=6;
    print(a,n);
}
