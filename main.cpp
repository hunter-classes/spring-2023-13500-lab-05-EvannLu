/*
Author: Evan Lu
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab-05
*/

#include <iostream>
#include "funcs.h"

int main() {

  //Task A 
  std::cout << "------------------------\n" << "Task A:" << std::endl;
  std::cout << "isDivisbleBy(100,25) == " << isDivisibleBy(100,25) << std::endl;
  std::cout << "isDivisbleBy(35,17) == " << isDivisibleBy(35,17) << std::endl;

  //Task B
  std::cout << "------------------------\n" << "Task B:" << std::endl;
  std::cout << "isPrime(11) == " << isPrime(11) << std::endl; 
  std::cout << "isPrime(15) == " << isPrime(15) << std::endl;
  
  //Task C 
  std::cout << "------------------------\n" << "Task C:" << std::endl;
  std::cout << "nextPrime(50) == " << nextPrime(50) << std::endl;
  std::cout << "nextPrime(75) == " << nextPrime(75) << std::endl;

  //Task D 
  std::cout << "------------------------\n" << "Task D:" << std::endl;
  std::cout << "countPrimes(0,10): " << countPrimes(0,10) << std::endl;
  std::cout << "countPrimes(0,100): " << countPrimes(1,100) << std::endl;

  //Task E 
  std::cout << "------------------------\n" << "Task E:" << std::endl;
  std::cout << "isTwinPrime(19): " << isTwinPrime(19) << std::endl; 
  std::cout << "isTwinPrime(3): " << isTwinPrime(47) << std::endl;

  //Task F
  std::cout << "------------------------\n" << "Task F:" << std::endl;
  std::cout << "nextTwinPrime(2): " << nextTwinPrime(2) << std::endl;
  std::cout << "nextTwinPrime(-20): " << nextTwinPrime(3) << std::endl;

  //Task G
  std::cout << "------------------------\n" << "Task G:" << std::endl;
  std::cout << "largestTwinPrime(1,50): " << largestTwinPrime(1,50) << std::endl;
  std::cout << "largestTwinPrime(57,75): " << largestTwinPrime(57,75) << std::endl;
  return 0;
}
