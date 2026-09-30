# First Missing Positive

A simple Java program that finds the smallest positive integer that is missing from an unsorted array.

## Logic

* First, sort the array using `Arrays.sort()`.
* Start with `missing = 1`, because `1` is the smallest positive integer.
* Traverse through the sorted array.
* If the current number is equal to `missing`, increase `missing` by `1`.
* Negative numbers, `0`, and numbers smaller than `missing` are ignored.
* If a number greater than `missing` is found, it means `missing` is not present in the array.
* After checking all elements, return `missing`.

## Example

### Input


nums = [3, 4, -1, 1]

### Output

2

### Explanation

After sorting the array:

[-1, 1, 3, 4]


The positive numbers are:

1, 3, 4

`1` is present, but `2` is missing.

So the answer is:

2


## Complexity

**Time Complexity: O(n log n)** — The array is sorted using `Arrays.sort()`.

**Space Complexity: O(1)** — No extra array is used.
