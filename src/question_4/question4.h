#include <iostream>
#include <string>
using namespace std;

class Die
{

public: 
    int generate_random();    // CLass Method

private:
    int sides = 6;
};