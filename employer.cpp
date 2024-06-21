/*
* File: employer.cpp
* Author: Hong Thuan Phat.
* Date: 10/6/2024.
* Description: This file contains all functions is defined by the Class Employer.
*/
#include "employer.hpp"
#include "dish.hpp"
#include"table.hpp"
#include"manager.hpp"
#include <vector>
#include <string>
#include<iostream>
/*
* Function: updateTableList
* Description: This function is called to update number of table.
* Input:
*   menu
*   number
* Output:
*   Updated table list from manager to employer.
*/
void Employer::updateTableList(list<Dish> menu, int number)
{
    list_table.clear(); // Delete the current table list
    for (int i = 1; i <= number; ++i)
    {
        Table table(i, true, menu);
        list_table.push_back(table); // Add new table to the list
    }
}
/*
* Function: getTable
* Description: This function is called to get chosen table.
* Input:
*   id
* Output:
*   The employee will serve the selected table.
*   If the table is invalid, a notification will be returned.
*/
Table& Employer::getTable(int id)
{
    for (auto& table : list_table)
    {
        if (table.getID() == id)
        {
            cout << "Table is found\n";
            return table;
        }
    }
    cout << "Table not found\n";
    static Table invalidTable; 
    return invalidTable;
}
/*
* Function: displaySelectedTable
* Description: This function is called to display selected table with status table (available/not available).
* Input:
*   num
* Output:
*   Inform employee about table number and table status.
*/
void Employer::displaySelectedTable(int num)
{
    cout << "Selected table: ";
    for (int i = 1; i <= num; ++i)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Table Status: \t";
    for (int i = 1; i <= num; ++i)
    {
        cout << "O ";
    }
    cout << endl;
    cout << "X: is not available\n";
    cout << "O: is available\n";
}
