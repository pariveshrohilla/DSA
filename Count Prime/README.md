# Count Primes

A simple C program that counts how many prime numbers are less than `n` using the Sieve of Eratosthenes.

## Logic

* If `n <= 2`, there are no prime numbers less than `n`, so return `0`.
* We only store **odd numbers** in the array because `2` is the only even prime number.
* The array `isPrime` is initialized with `1`, meaning the number is considered prime.
* `isPrime[0] = 0` because index `0` represents the number `1`, which is not prime.
* Start checking from `3` and go only up to `i * i < n`.
* If `i` is prime, mark all its multiples starting from `i * i` as not prime.
* The step is `2 * i` because we only need to check odd multiples.
* Finally, count all the remaining odd prime numbers.
* Start the count with `1` because `2` is the only even prime number.

## Example

### Input

```text
n = 10
```

### Output

```text
4
```

### Explanation

The prime numbers less than `10` are:

```text
2, 3, 5, 7
```

So the answer is:

```text
4
```

## Complexity

**Time Complexity: O(n log log n)** — The Sieve of Eratosthenes efficiently marks the multiples of prime numbers.

**Space Complexity: O(n)** — The `isPrime` array stores information for about `n / 2` numbers.
