#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question4.h"

TEST_CASE ("Testing die") {
	Die rolls;
    srand(time(NULL));
	for (int i = 0;i < 20; i++){
	REQUIRE((rolls.generate_random() > 0 && rolls.generate_random() <= 6));
	}
}
