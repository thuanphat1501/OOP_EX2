/*
* File: manager.cpp
* Author: Hong Thuan Phat.
* Date: 10/6/2024.
* Description: This file contains all functions is defined by the Class Manager.
*/
#include "manager.hpp"
#include <iostream>
/*
* Function: setTable
* Description: This function is called to set number of table.
* Input:
*   number
* Output:
*   Setup number table.
*/
void Manager::setTable(int number) {
    number_table = number;
}
/*
* Function: newDish
* Description: This function is called to add new dish to menu.
* Input: None
* Output:
*   Insert new dish to menu.
*/
void Manager::newDish() {
    string dishName;
    int dishPrice;
    cout << "Enter dish name: ";
    cin >> dishName;
    cout << "Enter dish price: ";
    cin >> dishPrice;

    Dish newDish(dishName, dishPrice);
    menu.push_back(newDish);

    cout << "Dish added successfully!" << endl;
}
/*
* Function: updatePrice
* Description: This function is called to update price of dish.
* Input: None
* Output:
*   The new price will update for dish.
*/
void Manager::updatePrice() {
    string dishName;
    int newDishPrice;
    cout << "Enter dish name to update: ";
    cin >> dishName;

    for (auto& dish : menu) {
        if (dish.getName() == dishName) {
            cout << "Enter new price for " << dishName << ": ";
            cin >> newDishPrice;
            dish.setPrice(newDishPrice);
            cout << "Dish updated successfully!" << endl;
            return;
        }
    }
    cout << "Dish not found." << endl;
}
/*
* Function: deleteDish
* Description: This function is called to delete dish from menu.
* Input: 
*   dishId
* Output:
*   The dish with selected ID will be delete from menu.
*/
void Manager::deleteDish(int dishId) {
    for (auto it = menu.begin(); it != menu.end(); ++it) {
        if (it->getID() == dishId) {
            menu.erase(it);
            cout << "Dish deleted successfully!" << endl;
            return;
        }
    }
    cout << "Dish not found." << endl;
}
/*
* Function: listDish
* Description: This function is called to display list of Dish.
* Input: None
* Output:
*   Menu will be display.
*/
void Manager::listDish() const {
    for (const auto& dish : menu) {
        cout << "ID: " << dish.getID() << ", Name: " << dish.getName() << ", Price: " << dish.getPrice() << endl;
    }
}
