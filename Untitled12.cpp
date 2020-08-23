
#include <bits/stdc++.h>
using namespace std;
void print (int a[],int n,int sum)
{
int low=0,high=n-1;
while(low<high)
{
    if(a[low]+a[high]==sum)
    {
        cout<<a[low]<<" "<<a[high]<<endl;

    }
    if(a[low]+a[high]<sum)
    {low++;}
    else{high--;}

}
}
int main()
{
int a[]={1,-1,2,-2,3,-3},n=6;
int sum=0;
sort(a,a+n);
print(a,n,sum);
}
