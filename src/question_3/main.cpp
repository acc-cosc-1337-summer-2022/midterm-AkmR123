#include <iostream>
#include <string>
#include "question3.h"

using namespace std;

int main()
{
    int choice;
    double user_input_length;
    double user_input_width;
    do
    {
        // Getting constructor parameter values
        cout << "\nEnter the length: ";
        cin >> user_input_length;

        cout << "Enter the width: ";
        cin >> user_input_width;

        if (user_input_length < 0 || user_input_width < 0) {
            cout << "You input an invalid number (less than 0) for either the length or width. Try again or quit. " << endl;
        } else {
        // Creating an object
        Rectangle user_inputs(user_input_length,user_input_width);

        user_inputs.get_area();
        user_inputs.display_results();
        }
        cout << "\n1 - Try again\n2 - quit";
        cout << "\nMake your decision: ";
        cin >> choice;
    }
    while(choice == 1);
    return 0;
}