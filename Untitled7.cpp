#include<iostream>
#include"Untitled6.h"
using namespace std;
int main()
{
    Hashtable<int> h;
    h.insert("mango",120);
    h.insert("Gman",280);
    h.print();
    int t=h.searc("mango");
    cout<<t;
}
