## 14. Longest Common Prefix

### Problem

Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string `""`.

### Example

Input:
```text
["flower","flow","flight"]
```

Output:

"fl"

## Approach
Sort all the strings alphabetically.
Take the first and last strings after sorting.
Compare their characters one by one.
The matching characters form the longest common prefix.
Return the common prefix.

## Complexity
Time Complexity: O(n log n)
Space Complexity: O(n)
