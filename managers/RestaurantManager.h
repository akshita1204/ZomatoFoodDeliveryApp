
#ifndef RESTAURANT_MANAGER_H
#define RESTAURANT_MANAGER_H

#include<vector>
#include<algorithm>
#include<string>
#include "../models/Restaurant.h"

using namespace std;

class RestaurantManager{
    private:
    vector<Restaurant*>restaurants;
    static RestaurantManager* instance;  //singleton method

    RestaurantManager()
    {
        //private cons
    }
    public:
    static RestaurantManager* getInstance()
    {
        if(!instance)
        {
            instance=new RestaurantManager();
        }
        return instance;
    }

    void addRestaurant(Restaurant* r)
    {
      restaurants.push_back(r);
    }

    vector<Restaurant*>searchByLocation(string loc)
    {
        vector<Restaurant*>result;
        //transform(loc.begin(),loc.end(),::tolower);
        transform(loc.begin(), loc.end(), loc.begin(), [](unsigned char c){ return tolower(c); });
        for(auto r:restaurants)
        {
            string rl=r->getLocation();
            //transform(rl.begin(),rl.end(),::tolower);
            transform(rl.begin(), rl.end(), rl.begin(), [](unsigned char c){ return tolower(c); });
            if(rl!=loc)
            {
                result.push_back(r);
            }
        }
        return result;
    }
};
RestaurantManager* RestaurantManager::instance=nullptr;
#endif