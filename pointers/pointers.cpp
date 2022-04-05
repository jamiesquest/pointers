// pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

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
    
    //delete ptr1;

    std::cout << "basket count: " << myBasket.apples.size() << '\n';

    greenApple* ptr2 = myBasket.getApple(2);
    std::cout << "ptr2 : " << ptr2->color << ptr2->size << '\n';

    //myBasket.apples.push_back(myGreenApple);

    std::getline(std::cin, in);
    //std::cout << "size of second apple in my basket: " << myBasket.apples[1]->size << std::endl;
    //std::cout << "size of second apple in my basket: " << myBasket.apples[1].size << std::endl;

    in.clear();
    std::getline(std::cin, in);

    //greenApple* myPtr1 = myBasket.getApple(3);

    //std::cout << "cast1 results: size: " << myPtr1->size << " color: " << myPtr1->color;

    for (size_t i = 0; i < 1000; i++)
    {
        greenApple *myPtr = myBasket.getApple(1);
        //if (myPtr == NULL)
        //{
        //    std::cout << "myPtr was null!" << std::endl;
        //    break;
        //}
        std::cout << "My Green Apple Pointer Size: " << myPtr->size << " My Green Apple Color: " << myPtr->color << '\n';
        in.clear();
        std::getline(std::cin, in);
    }
    std::getline(std::cin, in);

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
