#include "catch.hpp"
#include "functions_to_implement.cpp"


TEST_CASE ("Factorials are computed", "[Factorial]"){
    CHECK(Factorial(0) == 0);
    REQUIRE(Factorial(1) == 1);
    REQUIRE(Factorial(2) == 2);
    REQUIRE(Factorial(3) == 6);
    REQUIRE(Factorial(10) == 362880);
}
