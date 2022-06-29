#include "question1.h"
#include <iostream>
using namespace std;


int main()
{
    // CLASS VARIABLE DECLARATION

    // Local variable declaratioms
    int choice;
    double user_input_meal_amount;
    double user_input_tip_percentage;

    do
    {
        // Getting constructor parameter values
        cout << "Enter the price of your meal: ";
        cin >> user_input_meal_amount;

        cout << "Enter the tip percentage (in decimal form) you'd like to give: ";
        cin >> user_input_tip_percentage;

        if (user_input_meal_amount < 0 || user_input_tip_percentage < 0) {
            cout << "You input an invalid number (less than 0) for either the meal amount or tip percentage. Try again or quit. " << endl;
        } else {
        // Creating an object
        Receipt user_inputs(user_input_meal_amount,user_input_tip_percentage);

        
        user_inputs.calculate_tax();
        user_inputs.calculate_gratuity();
        user_inputs.display_receipt();
        }
        cout << "\n1 - Try again\n2 - quit";
        cout << "\nMake your decision: ";
        cin >> choice;
    }
    while(choice == 1);
    return 0;
}