#include "catch.hpp"
#include "geometry.h"

TEST_CASE("geometry_h_circleArea") {
	REQUIRE(circleArea(1) == Approx(3.14159265));
	REQUIRE(circleArea(20) == Approx(1256.63706));
	REQUIRE(circleArea(3.14) == Approx(30.9748468919));
}
