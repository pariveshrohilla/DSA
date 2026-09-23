# Valid Anagram

A simple C program that checks whether two strings are anagrams by sorting both strings and then comparing them.

## Logic

* First, check if both strings have the same length.
* If their lengths are different, they cannot be anagrams.
* Sort both strings using `qsort()`.
* Compare the sorted strings using `strcmp()`.
* If both sorted strings are the same, return `true`.
* Otherwise, return `false`.

## Example

### Input

```text
s = "anagram"
t = "nagaram"
```

### Output

```text
true
```

### Explanation

First, both strings have the same length.

After sorting:

```text
anagram → aaagmnr
nagaram → aaagmnr
```

Both sorted strings are the same, so they are anagrams.

For example, if:

```text
s = "rat"
t = "car"
```

After sorting:

```text
rat → art
car → acr
```

They are different, so the output is `false`.

## Complexity

**Time Complexity: O(n log n)** — `qsort()` sorts both strings, and sorting takes `O(n log n)` time.

**Space Complexity: O(log n)** — `qsort()` may use recursion stack space depending on its implementation.
