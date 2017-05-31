//
//  stock10.h
//  C++PrimerPlusC10
//
//  Created by zhanghenan on 2017/5/27.
//  Copyright © 2017年 HN. All rights reserved.
//

#ifndef stock10_h
#define stock10_h
#include <string>

class Stock
{
private:
    std::string company;
    long shares;
    double share_val;
    double total_val;
    void set_tot(){ total_val = shares * share_val ;}

public:
    Stock();
    Stock(const std::string &co, long n = 0, double pr = 0.0);
    ~Stock();
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show();
};

#endif /* stock10_h */