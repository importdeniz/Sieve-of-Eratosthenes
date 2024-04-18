# Sieve of Eratosthenes Implementation in C

## Algorithm Overview:

The Sieve of Eratosthenes is an efficient algorithm for finding all prime numbers up to a specified integer value. Here's a step-by-step explanation of how it works:

1. **Initialization**:
   - We define a constant `MAX` to specify the largest number to consider for finding primes.
   - An array `prime[MAX+1]` is initialized to store whether each number up to `MAX` is prime or not.
   - We set `prime[0]` and `prime[1]` as `false`, as 0 and 1 are not prime numbers.

2. **Marking Primes**:
   - We iterate through the array, starting from 2 (the first prime number).
   - For each prime number found (`i`), we mark all its multiples as not prime by setting `prime[x]` to `false`.

3. **Completing the Sieve**:
   - We continue this process for each subsequent unmarked number (`i`) until we reach the square root of `MAX`.
   - At this point, all non-prime numbers up to the square root of `MAX` have been marked.

4. **Output**:
   - Finally, we print the results to the console.
   - The numbers that remain marked as prime in the array are the prime numbers up to and including `MAX`.

## Usage:

To run the program, compile the `sieve.c` file using a C compiler and execute the resulting executable.
