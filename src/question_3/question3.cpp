#include "question3.h"
#include <iostream>
#include <string>

using namespace std;

double Rectangle::get_area(){
    return length * width;
}
double Rectangle::get_length(){
    return length;
}
double Rectangle::get_width(){
    return width;
}
void Rectangle::display_results(){
    cout << "\nThis is your length: " << get_length() << endl;
    cout << "\nThis is your width: " << get_width() << endl;
    cout << "\nThis is your area: " << get_area() << endl;
}   