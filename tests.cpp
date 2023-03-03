#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

//Task A
TEST_CASE("n is divisble by d") {
    CHECK(isDivisibleBy(10,5) == true); 
    CHECK(isDivisibleBy(56,101) == false);
}


//Task B
TEST_CASE("n is a prime number") {
    CHECK(isPrime(11) == true);
    CHECK(isPrime(15) == false);
}


//Task C 
TEST_CASE("The next prime number after n") {
    CHECK(nextPrime(61) == 67);
    CHECK(nextPrime(17) == 19);
}


//Task D
TEST_CASE("Count primes in range") {
    CHECK(countPrimes(0,10) == 4);
    CHECK(countPrimes(1,100) == 25);
}


//Task E
TEST_CASE("Is a twin prime?") {
    CHECK(isTwinPrime(13) == true);
    CHECK(isTwinPrime(23) == false);
}


//Task F 
TEST_CASE("Next twin prime") {
    CHECK(nextTwinPrime(13) == 17);
    CHECK(nextTwinPrime(19) == 29);
}


//Task G 
TEST_CASE("Largest twin prime in range") {
    CHECK(largestTwinPrime(17,17) == 17);
    CHECK(largestTwinPrime(5, 18) == 17);
    CHECK(largestTwinPrime(1, 31) == 31);
}