#include <bits/stdc++.h>
using namespace std;
int has[1000][2];
void sear(int x)
{
    if(x>0){
    if(has[x][0])
    {
        cout<<"Yes";return ;
    }
    cout<<"NO";return ;}

        if(has[abs(x)][1])
        {
          cout<<"Yes";return;
        }
        cout<<"NO";return;
    }

int main(){
    int a[]={1,-1,2,-5,7,-8},n=6;
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            has[a[i]][0]=1;
        }
        else if(a[i]<0){has[abs(a[i])][1]=1;}
    }int x=-5;
    //sear(x);
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<1000;j++){
        cout<<has[j][i]<<" ";}
    cout<<"second"<<endl;
    }
}
