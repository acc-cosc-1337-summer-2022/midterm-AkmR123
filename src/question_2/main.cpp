#include <iostream>
#include "question2.h"
#include <string>
using namespace std;

int main()
{
    int choice;
    do
    {
        double celsius;
        cout << "\nEnter Celsius value: ";
        cin >> celsius;

        cout << get_fahrenheit(celsius);

        cout << "\nEnter 1 if you'd like to try again, or 2 if you'd like to quit: ";
        cin >> choice;
    }
    while (choice == 1);
    return 0;
}