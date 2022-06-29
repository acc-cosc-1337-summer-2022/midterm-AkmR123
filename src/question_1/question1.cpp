#include "question1.h"
#include <iostream>
using namespace std;




double Receipt::calculate_tax() {     // Class Method - Get tax by multiplying the const tax of 0.08 by meal_amount
    return meal_amount * tax;
}  

double Receipt::calculate_gratuity() {    // Class Method - Get gratuity by multiplying gretuity and meal_amount
    return gratuity * meal_amount;        // acquired from the use of the class constructor in the main.cpp
}

void Receipt::display_receipt() {     // Class Method - Print receipt
    cout << "\nYour meal amount was: " << meal_amount << endl;
    cout << "This is your calculated tax due: " << calculate_tax() << endl;
    cout << "This is your calculate gratuity due: " << calculate_gratuity() << endl;
}
