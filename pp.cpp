#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int >s;
    int a[]={-1,1,3,-3,5,1,3,1,3},n=5,t=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==t)
            {
                cout<<a[i]<<","<<a[j]<<endl;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        s.insert(a[i]);
    }
    set<int>::iterator i;
    for(i=s.begin();i!=s.end();i++)
    {
        cout<<*i<<" ";
    }
}
