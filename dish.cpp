/*
* File: dish.cpp
* Author: Hong Thuan Phat.
* Date: 10/6/2024.
* Description: This file contains all functions is defined by the Class Dish.
*/
#include "dish.hpp"
/*
* Function: getID
* Description: This function is called to get Id of Dish.
* Input: None
* Output:
*   Return id of dish.
*/
int Dish::getID() const { return id; }
/*
* Function: setPrice
* Description: This function is called to set a new price for Dish.
* Input: 
*	newPrice
* Output:
*   Return new price of dish.
*/
void Dish::setPrice(int newPrice) { price = newPrice; }
/*
* Function: getPrice
* Description: This function is called to get price of Dish.
* Input: None
* Output:
*   Return price of dish.
*/
int Dish::getPrice() const { return price; }
/*
* Function: getName
* Description: This function is called to get name of Dish.
* Input: None
* Output:
*   Return name of dish.
*/
string Dish::getName() const { return name; }
