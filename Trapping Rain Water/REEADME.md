# Trapping Rain Water

A simple Java program that calculates how much rainwater can be trapped between the bars of an elevation map.

## Logic

* Traverse each position of the array.
* For every position, find the maximum height on its left side.
* Find the maximum height on its right side.
* The water trapped at that position depends on the smaller of the two maximum heights.
* Calculate the trapped water using:
  `min(leftMax, rightMax) - height[i]`
* Add the trapped water for every position.
* Finally, return the total amount of trapped water.

## Example

### Input

height = [0,1,0,2,1,0,1,3,2,1,2,1]

### Output

6

### Explanation

The elevation map can trap a total of `6` units of rainwater between the bars.

So the answer is:

6


## Complexity

**Time Complexity: O(n²)** — For every position, we find the maximum height on both the left and right sides.

**Space Complexity: O(1)** — No extra array is used.
