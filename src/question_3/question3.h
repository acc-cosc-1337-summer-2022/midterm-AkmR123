#include <iostream>
#include <string>

using namespace std;
// The class constructor will accept int l and w, have public functions get_area, get_length, and get_width, private variables length and width. 
class Rectangle
{
public:
    Rectangle(int l, int w) {    // Class Constructor
        length = l;
        width = w;
    }
    double get_area();   // Class Method
    double get_length();
    double get_width();
    void display_results();

private:
    double length;
    double width;
};