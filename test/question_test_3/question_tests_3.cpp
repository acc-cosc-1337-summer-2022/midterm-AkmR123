#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question3.h"

TEST_CASE("testing to get AREA") {
	Rectangle user_inputs(5,5);
	REQUIRE(user_inputs.get_area() == 25);

	Rectangle user_inputs2(3,10);
	REQUIRE(user_inputs2.get_area() == 30);	

	Rectangle user_inputs3(10,10);
	REQUIRE(user_inputs3.get_area() == 100);
}

TEST_CASE("Testing to get LENGTH") {
	Rectangle user_inputs(5,5);
	REQUIRE(user_inputs.get_length() == 5);

	Rectangle user_inputs2(3,10);
	REQUIRE(user_inputs2.get_length() == 3);	

	Rectangle user_inputs3(10,10);
	REQUIRE(user_inputs3.get_length() == 10);
}

TEST_CASE("Testing to get WIDTH") {
	Rectangle user_inputs(5,5);
	REQUIRE(user_inputs.get_width() == 5);

	Rectangle user_inputs2(3,10);
	REQUIRE(user_inputs2.get_width() == 10);	

	Rectangle user_inputs3(10,10);
	REQUIRE(user_inputs3.get_width() == 10);
}