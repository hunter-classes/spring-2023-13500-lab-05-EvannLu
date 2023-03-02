#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"


TEST_CASE("n is divisble by d") {
    CHECK(isDivisibleBy(10,5) == 1); 
    CHECK(isDivisibleBy(9,3) == 1);
}

TEST_CASE("n is not divisble by d") {
    CHECK(isDivisibleBy(4,3) == 0);
    CHECK(isDivisibleBy(56,101) == 0);
}