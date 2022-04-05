#pragma once
#include <vector>
#include "apple.h"

struct basket {
    std::vector<apple*> apples;
    basket();
    virtual ~basket();
    void clearBasket();
    virtual apple* getApple(int index);
};

struct greenBasket : public basket {
    //std::vector<greenApple*> apples;
    void gather(int sz);
    greenBasket();
    virtual ~greenBasket();
    //std::vector <greenApple> apples;
    greenApple* getApple(int index) override;
    //greenApple* getApple(int index) override;
};