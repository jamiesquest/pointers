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
    void gather(int sz);
    greenBasket();
    virtual ~greenBasket();
    greenApple* getApple(int index) override;
};