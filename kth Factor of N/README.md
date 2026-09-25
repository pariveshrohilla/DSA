# Kth Factor of n

A simple C program that finds the `k`th factor of a number `n`.

## Logic

* Start checking numbers from `1` to `n`.
* If `n % i == 0`, then `i` is a factor of `n`.
* Increase `count` whenever a factor is found.
* When `count` becomes equal to `k`, return `i`.
* If the `k`th factor does not exist, return `-1`.

## Example

### Input

```text
n = 12
k = 3
```

### Output

```text
4
```

### Explanation

The factors of `12` are:

```text
1, 2, 3, 4, 6, 12
```

Counting them:

```text
1st → 1
2nd → 2
3rd → 3
4th → 4
```

So for `k = 3`, the answer is:

```text
3
```

## Complexity

**Time Complexity: O(n)** — The loop checks every number from `1` to `n`.

**Space Complexity: O(1)** — Only a few variables are used.
