#include<bits/stdc++.h>
using namespace std;
class fruit
{
public:
    int price;string name,city;
    fruit(){}
    fruit(string name,string city,int price)
    {
        this->name=name;this->city=city;this->price=price;
    }

};

int main()
{
    fruit f("MANGO","Delhi",200);
    unordered_map<string,fruit>my;
    my[f.name]=f;fruit fs=my["MANGO"];
    cout<<fs.price<<endl;
    cout<<my.count("MANGO")<<endl;
    cout<<my.count("APPLE");
    my.erase("MANGO");
    cout<<my.count("MANGO")<<endl;
   if(my.count("MANGO")){
    cout<<my["MANGO"].price;}
    else{cout<<"NO<NO";}
}
