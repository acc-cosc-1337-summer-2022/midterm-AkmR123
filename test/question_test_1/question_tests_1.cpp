#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question1.h"

TEST_CASE("Testing to get tax")
{
	Receipt user_inputs(10,0.2);
	REQUIRE(user_inputs.calculate_tax() == 0.8);

	Receipt user_inputs2(20,0.2);
	REQUIRE(user_inputs2.calculate_tax() == 1.6);

	Receipt user_inputs3(30,0.2);
	REQUIRE(user_inputs3.calculate_tax() == 2.4);

}

TEST_CASE("Testing to calculate gratuity")
{
	Receipt user_inputs(10,0.2);
	REQUIRE(user_inputs.calculate_gratuity() == 2);

	Receipt user_inputs2(20,0.15);
	REQUIRE(user_inputs2.calculate_gratuity() == 3);

	Receipt user_inputs3(30,0.10);
	REQUIRE(user_inputs3.calculate_gratuity() == 3);
}