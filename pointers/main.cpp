
#include <string>
#include <vector>
#include <iostream>
#include "basket.h"

int main()
{

    std::string in;
    std::cout << "Hello World!\n";
    
    greenBasket myBasket = greenBasket();

    greenApple myGreenApple = greenApple(12);

    myBasket.gather(12);
    myBasket.gather(5);
    myBasket.gather(20);
    myBasket.gather(3);

    greenApple* ptr1 = myBasket.getApple(3);

    std::cout << "ptr1 : " << ptr1->color << ptr1->size << '\n';

    ptr1 = myBasket.getApple(2);
    std::cout << "ptr1 : " << ptr1->color << ptr1->size << '\n';

    std::cout << "basket count: " << myBasket.apples.size() << '\n';

    greenApple* ptr2 = myBasket.getApple(2);
    std::cout << "ptr2 : " << ptr2->color << ptr2->size << '\n';

    in.clear();
    std::getline(std::cin, in);

    for (size_t i = 0; i < 1000; i++)
    {
        greenApple *myPtr = myBasket.getApple(1);
        std::cout << "My Green Apple Pointer Size: " << myPtr->size << " Color: " << myPtr->color << '\n';
        in.clear();
        std::getline(std::cin, in);
    }
    myBasket.clearBasket();
    std::getline(std::cin, in);

}