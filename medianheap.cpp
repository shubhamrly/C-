
#include<bits/stdc++.h>
using namespace std;
void print (int a[],int n)
{
    priority_queue <double>s;
    priority_queue <double,vector<double>,greater<double> > g;
    s.push(a[0]);
   double med=a[0];
    cout<<med<<" ";
    for(int i=1;i<n;i++)
    {
        double x=a[i];
        if(s.size()>g.size())
        {
            if(x<med)
            {
                g.push(s.top());s.pop();s.push(x);
            }
            else
                {g.push(x);}
            med=(s.top()+g.top())/2;
        }
       else  if(s.size()==g.size())
        {
            if(x<med)
            {
                s.push(x);med=(double)s.top();
            }
            else{g.push(x);med=(double)g.top();}
        }
        else{
            if(x>med)
            {
                s.push(g.top());g.pop();g.push(x);
            }
            else
                s.push(x);

            med=(s.top()+g.top())/2.0;
        }

        cout<<med<<" ";
    }
}
int main()
{
    int a[]={5,15,10,20,3},n=5;
    print(a,n);
}
