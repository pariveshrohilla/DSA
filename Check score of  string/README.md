## Maximum Score Word in C

A simple C program that finds the word with the maximum score in a sentence.

## Scoring

Each word is given a score based on the number of vowels and consonants:

Each vowel = 2 points

Each consonant = 1 point

Formula
Score = (number of vowels × 2) + number of consonants

## Example
Input
Enter a sentence: hello world

Output
Max word: hello
Max score: 7


For hello:

Vowels = 2 → 2 × 2 = 4

Consonants = 3 → 3 × 1 = 3

Total = 7

## Complexity

Time Complexity: O(n), where n is the length of the sentence.

Space Complexity: O(n), because the sentence is stored in a character array.
