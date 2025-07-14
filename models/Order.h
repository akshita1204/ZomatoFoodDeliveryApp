
#ifndef ORDER_H
#define ORDER_H

#include<iostream>
#include<string>
#include<vector>
#include "User.h"
#include "Restaurant.h"
#include "MenuItem.h"

using namespace std;

class Order
{
   protected:
   static int nextOrderId;
   int orderId;
   User* user;
   Restaurant* restaurant;
   vector<MenuItem>menu;
   double total;
   string scheduled;
};

#endif