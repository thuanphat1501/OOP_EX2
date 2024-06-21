/*
* File: order.cpp
* Author: Hong Thuan Phat.
* Date: 10/6/2024.
* Description: This file contains all functions is defined by the Class Order.
*/
#include"order.hpp"
/*
* Function: setNumberDish
* Description: This function is called to set number of Dish.
* Input: 
*   number
* Output:
*   The number of Dish.
*/
void Order::setNumberDish(int number)
{
    number_dish = number;
}
/*
* Function: getDish
* Description: This function is called to get Dish.
* Input: None
* Output:
*   Get dish in menu.
*/
Dish Order::getDish() const
{
    return dish;
}
/*
* Function: getNumberDish
* Description: This function is called to get number of Dish.
* Input: None
* Output:
*   Get number of Dish in list order.
*/
int Order::getNumberDish() const
{
    return number_dish;
}
