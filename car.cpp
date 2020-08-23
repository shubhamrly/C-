#include<bits/stdc++.h>
using namespace std;
class car
{
    public:int x,y,id;
    car(int id,int x,int y)
    {
        this->id=id;this->x=x;this->y=y;
    }
    int dis ()
    {
        return x*x+y*y;    }
        void print()
        {
            cout<<"LOC"<<id<<" ";
            cout<<"Dis"<<x<<","<<y<<" "<<endl;
        }
};
class carcom{public:
bool operator()(car a,car b)
{
    return (a.dis()>b.dis());
}
};
int main()
{
    priority_queue<car,vector<car>,carcom>q;
    int x[5]={5,6,17,18};
    int y[5]={1,-2,8,9,10};
    for(int i=0;i<5;i++)
    {
        car c(i,x[i],y[i]);
        q.push(c);
    }
    while(!q.empty())
    {
        car p=q.top();
        p.print();
        q.pop();
    }
}
