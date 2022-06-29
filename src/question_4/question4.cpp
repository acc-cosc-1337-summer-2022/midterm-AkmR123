#include <iostream>
#include <string>
#include <stdio.h>
#include <time.h>
#include "question4.h"

using namespace std;

int Die::generate_random() {
    int landed_on = rand() % sides + 1;
    return landed_on;
}