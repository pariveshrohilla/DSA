#include <string.h>

int countPrimes(int n) {
    if (n <= 2)
        return 0;

    //Make an array
    //We only store odd numbers, so size is n / 2
    char isPrime[n / 2];

    // set all values to 1
    memset(isPrime, 1, n / 2);

    // 0 represents number 1, which is not prime
    isPrime[0] = 0;

    //check till i*i cause after that there's no possibility to check
    // all the factors of the prime number to change them to 0
    for (int i = 3; i * i < n; i += 2) {
        if (isPrime[i / 2]) {

            //Start from i*i because smaller multiples
            //have already been marked
            for (int j = i * i; j < n; j += 2 * i) {
                isPrime[j / 2] = 0;
            }
        }
    }

    //make a counter
    //2 is the only even prime number
    int count = 1;

    // count all the odd prime numbers
    for (int i = 3; i < n; i += 2) {
        if (isPrime[i / 2])
            count++;
    }

    return count;
}
