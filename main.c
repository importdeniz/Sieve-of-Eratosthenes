#include <stdio.h>
#include <stdbool.h>

int main(int argc, char **argv) {
    // largest number considered
    const int MAX = 1000;

    // Initialize array
    bool prime[MAX+1];

    // Set 0 and 1 as not prime
    prime[0] = false;
    prime[1] = false;

    // Set all indices from 2 as prime
    for(int h = 2; h <= MAX+1; h++)
        prime[h] = true;

    // Sieve of Eratosthenes
    for(int i = 2; i*i <= MAX; i++) {   // Iterate up to the square root of the largest considered number
        if(prime[i] == true)    // If index is unmarked
            for(int x = 2*i; x <= MAX; x+=i) // Iterate over multiples of i
                prime[x] = false; // Mark multiples as not prime
    }
    // Sieve of Eratosthenes completed

    // Console output
    printf("Sieve of Eratosthenes up to and including %d:\n", MAX);
    for (int i = 0; i <= MAX; i++) {
        if (prime[i])
            printf("Index %d is prime.\n", i);
        else
            printf("Index %d is not prime.\n", i);
    }
}