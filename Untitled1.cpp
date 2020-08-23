#include<bits/stdc++.h>
using namespace std;
void qprint (priority_queue< int,vector<int>,greater<int> > pq)
{
    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
}
int main()
{
    priority_queue<int,vector<int>,greater<int> >pq;
    int n,k=3,cs=0;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==-1)
        {
            qprint(pq);
        }
        else{
            if(cs<k)
            {
                pq.push(n);
                cs++;
            }
            else{
                if(n>pq.top())
                {
                    pq.pop();pq.push(n);
                }
            }
        }
    }
}
