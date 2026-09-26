# Move Zeroes

A simple C program that moves all `0`s to the end of an array while maintaining the relative order of the non-zero elements.

## Logic

* Start with `k = 0`, which represents the position where the next non-zero element should be placed.
* Traverse the array from left to right.
* If `nums[i]` is not `0`, swap `nums[i]` with `nums[k]`.
* Increase `k` after placing a non-zero element.
* This moves all non-zero elements to the front and all zeroes to the end.

## Example

### Input
nums = [0, 1, 0, 3, 12]

### Output
[1, 3, 12, 0, 0]

## Explanation
We traverse the array and move each non-zero element to the next available position.

[0, 1, 0, 3, 12]
    ↑
    1 → move to position 0

[1, 0, 0, 3, 12]
          ↑
          3 → move to position 1

[1, 3, 0, 0, 12]
             ↑
             12 → move to position 2

[1, 3, 12, 0, 0]

The final array is:

[1, 3, 12, 0, 0]

## Complexity
Time Complexity: O(n) — The array is traversed once.

Space Complexity: O(1) — Only a few variables are used, so no extra array is required.
