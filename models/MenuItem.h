#ifndef MENUITEM_H
#define MENUITEM_H

#include<string>
using namespace std;

class MenuItem
{
private:
string code;
string name;
int price;

public:
MenuItem(string&code,string&name,int price)
{
    this->code=code;
    this->name=name;
    this->price=price;
}

string getcode() const{
    return code;
}

void setcode(const string&c) 
{
  code=c;
}

string getname() const{
    return name;
}

void setname(const string &n)
{
    name=n;
} 

int getprice() const
{
  return price;
}

void setprice(const int &p)
{
    price=p;
}

};
#endif