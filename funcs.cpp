#include <iostream>
#include "funcs.h"


bool isDivisibleBy(int n, int d) {
    if(n%d == 0) {
        return true;
    }
    else {
        return false; 
    }
}

bool isPrime(int n) {
    if(n<2) {
        return false;
    }
    else {
        for (int i = 2; i < n; i++) {
            if (n%i == 0) {
                return false;
            }
        }
        return true; 
    }
}

int nextPrime(int n){
    int j = n+1;
    while (isPrime(j) == false){
        j++;
    }
    return j;
}

int countPrimes(int a, int b) {
    int c=0;
    for(int k=a; k<=b; k++) {
        if(isPrime(k)==true) {
            c += 1;
        }
    }
    return c;
}

bool isTwinPrime(int n) {
    if(isPrime(n) == true) {
        if(isPrime(n+2) == true or isPrime(n-2) == true) {
            return true;
        }
        else {
            return false;
        }
    }
    else{
        return false;
    }
}

int nextTwinPrime(int n) {
    int x=1;
    while (isPrime(n)) {
        if (isTwinPrime(n+x)) {
            return n+x;
        } else {
            x++;
        }
    }
    return 0;
}

int largestTwinPrime(int a, int b) {
    int n;
    int m=b;
    while(isTwinPrime(m) == false and m >= a) {
        m = m-1;
    }
    if(isTwinPrime(m) == false) {
        return -1;
    }
    else {
        return m;
    }
}
