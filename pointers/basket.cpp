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

//apple* basket::getApple(int index)
//{
//    return nullptr;
//};

void greenBasket::gather(int sz) {
    //greenApple app = greenApple(sz);
    //apples.push_back(app);
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
    //apple* app = apples[index];
    //std::cout << "apple size: " << app->size << '\n';
    //greenApple* casted = (greenApple*)&this->apples.at(index);
    greenApple* casted;
    if (casted = dynamic_cast<greenApple*>(apples.at(index)))
    {
        std::cout << "greenApple color: " << casted->color << '\n';
        return casted;
    } else {
        std::cout << "invalid reference!";
        return nullptr;
    };
    //return dynamic_cast<greenApple*>(&apples[index]);
    //greenApple* ptr = nullptr;
    //ptr = dynamic_cast<greenApple*>(&apples[index]);
    //return ptr;
};