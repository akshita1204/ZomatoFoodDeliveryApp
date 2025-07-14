#ifndef CART_H
#define CART_H

#include<iostream>
#include<string>
#include "../models/MenuItem.h"
#include "../models/Restaurant.h"

using namespace std;

class Cart
{
   private:
   Restaurant* restaurant;
   vector<MenuItem>items;

   public:
   Cart()
   {
    restaurant=nullptr;
   }

   void addItem(const MenuItem&item)
   {
      if(!restaurant)
      {
        cout<<"Add a res before adding item"<<endl;
        return;
      }
      items.push_back(item);
   }

   double getTotalCost() const
   {
      double sum=0;
      for(const auto &it:items)
      {
        sum+=it.getprice();
      }
   }

   bool isEmpty()
   {
     return(!restaurant or items.empty());
   }

   void clear()
   {
    items.clear();
    restaurant=nullptr;
   }

   void setRestaurant(Restaurant* r)
   {
     restaurant=r;
   }

   Restaurant* getRestaurant() const
   {
    return restaurant;
   }

   const vector<MenuItem>&getItems() const{
    return items;
   }
};

#endif