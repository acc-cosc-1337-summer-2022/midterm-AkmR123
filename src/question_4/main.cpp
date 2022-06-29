#include <iostream>
#include <string>
#include <stdio.h>
#include <time.h>
#include "question4.h"

using namespace std;

int main()
{
    srand(time(NULL));
    int choice;
    do
    {
        Die rolls;
        cout << "Your die landed on: " << rolls.generate_random() << endl;

        cout << "\n1 - Try again\n2 - quit";
        cout << "\nMake your decision: ";
        cin >> choice;
    }
    while (choice == 1);
    return 0;
}