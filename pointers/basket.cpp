#include "basket.h"
#include <iostream>

basket::basket() {}
basket::~basket()
{
    this->clearBasket();
}
void basket::clearBasket()
{
    for (size_t i = 0; i < apples.size(); i++)
    {
        delete apples[i];
    }
    apples.clear();

}

apple* basket::getApple(int index)
{
    return nullptr;
}

void greenBasket::gather(int sz) {
    greenApple *app = new greenApple(sz);
    apples.push_back(dynamic_cast<apple*>(app));
}

greenBasket::greenBasket()
{
}

greenBasket::~greenBasket()
{
    basket::~basket();
}

greenApple* greenBasket::getApple(int index)
{
    if (index >= apples.size())
    {
        return nullptr;
    }
    else {
        greenApple* casted = dynamic_cast<greenApple*>(apples.at(index));
        return casted;
    }
    //greenApple* casted;
    //if (casted = dynamic_cast<greenApple*>(apples.at(index)))
    //{
    //    std::cout << "greenApple color: " << casted->color << '\n';
    //    return casted;
    //} else {
    //    std::cout << "invalid reference!";
    //    return nullptr;
    //};
};