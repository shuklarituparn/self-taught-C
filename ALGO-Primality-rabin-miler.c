#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

/* calculates (a^b) % c */
unsigned long long int power(unsigned long long int a, unsigned long long int b, unsigned long long int c) {
    unsigned long long int res = 1;
    a = a % c;

    while (b > 0) {
        if (b & 1)
            res = (res * a) % c;
        b = b >> 1;
        a = (a * a) % c;
    }
    return res;
}

/* Miller-Rabin primality test */
bool is_prime(unsigned long long int n, int k) {
    if (n == 2 || n == 3) //removing 2 and 3 from Miller-Rabin primality test
        return true;
    if (n == 1 || n % 2 == 0)
        return false;

    unsigned long long int d = n - 1;
    while (d % 2 == 0)
        d = d / 2;

    for (int i = 0; i < k; i++) {
        unsigned long long int a = (rand() % (n - 3)) + 2;
        unsigned long long int x = power(a, d, n);

        if (x == 1 || x == n - 1)
            continue;

        bool prime = false;
        for (unsigned long long int r = d; r > 1; r = r / 2) {
            x = (x * x) % n;
            if (r % 2 == 1)
                x = (x * a) % n;
            if (x == n - 1) {
                prime = true;
                break;
            }
        }
        if (!prime)
            return false;
    }
    return true;
}

int main() {
    srand(time(NULL));
    unsigned long long int n = 1093231634595;
    int k = 50;
    if (is_prime(n, k))
        printf("%llu is prime\n", n);
    else
        printf("%llu is composite\n", n);
    return 0;
}


//THEORY:

/* The power function calculates (a^b) % c using the binary exponentiation algorithm. The is_prime function takes a number n and the parameter k, which determines the number of iterations to be performed for the Miller-Rabin test. It first checks if the number is 2 or 3, which are prime numbers, or if it is 1 or even, which are composite. It then calculates the value of d such that n-1 = 2^r * d, where r is as large as possible, and d is odd. It then selects k random values of a between 2 and n-2 and checks if the property of the Euler's criterion holds true for each value of a. If it does not hold true for any of the values of a, then n is considered composite; otherwise, it is considered a prime with a high degree of confidence.

In the main function, an example number n is tested for primality with k set to 10. The result is printed to the console. Note that the accuracy of the test can be increased by increasing the value of k. */


/* The Miller-Rabin test uses a stronger version of Fermat's little theorem called the Euler's criterion, which says that if n is an odd prime number, then a^((n-1)/2) ≡ ±1 (mod n) for all a that are coprime to n. If n is composite, then this property holds true for only half of the values of a that are coprime to n. */