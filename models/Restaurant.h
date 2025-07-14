#ifndef RESTAURANT_H
#define RESTAURANT_H

#include<iostream>>
#include<string>
#include<vector>
#include<MenuItem.h>

using namespace std;

class Restaurant
{

    private:
    static int nextResId;
    int resId;
    string name;
    string location;
    vector<MenuItem>menu;

    public:
    Restaurant(const string &name,const string &location)
    {
       this->name=name;
       this->location=location;
       this->resId=++nextResId;
    }

    ~Restaurant()
    {
        cout<<"Destroying Restaurant "<<name<<" and clearing its menu"<<endl;
        menu.clear();
    }

    string getName() const{
        return name;
    }

    string setName(const string &n)
    {
       name=n;
    }

    string getLocation() const
    {
        return location;
    }

    string setLocation(const string &loc)
    {
        location=loc;
    }

    void addMenuItem(const MenuItem &item)
    {
      menu.push_back(item);
    }

    const vector<MenuItem>& getMenu() const
    {
       return menu;
    }
    
};

int Restaurant::nextResId=0;
#endif
