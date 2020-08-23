//https://ide.codingblocks.com/s/138021
#include<iostream>

#include"hashingtable.h"
using namespace std;
int main()
{
    Hashtable<int> h;
    h.insert("mango",120);
    h.insert("Gman",280);
    h.insert("asGman",240);
    h["dick"]=100;
    h.delet("dick");
    h.print();
    cout<<h["dick"]<<endl;

    int *t=h.search("mango");
    cout<<*t;
}
