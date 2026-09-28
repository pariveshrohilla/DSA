# Find First and Last Position of Element in Sorted Array

A simple C program that finds the first and last position of a target value in a sorted array.

## Logic

* Use **binary search** because the array is already sorted.
* Find the first occurrence of `target`.
* Find the last occurrence of `target`.
* If the target is not present, return `[-1, -1]`.
* For the first position:

  * If `nums[mid] == target`, store `mid` and continue searching on the left.
* For the last position:

  * If `nums[mid] == target`, store `mid` and continue searching on the right.

## Example

### Input

```text
nums = [5,7,7,8,8,10]
target = 8
```

### Output

```text
[3,4]
```

### Explanation

The target `8` appears at index `3` and index `4`.

So:

```text
First position = 3
Last position = 4
```

## Complexity

**Time Complexity: O(log n)** — Two binary searches are performed, one for the first position and one for the last position.

**Space Complexity: O(1)** — Only a few variables are used.
