#include <stdio.h>

int main() {
    char sentence[100];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    int max = 0;
    int v = 0, c = 0;
    int start = 0;
    int maxStart = 0, maxEnd = 0;

    for (int i = 0; sentence[i] != '\0'; i++) {

        if (sentence[i] == ' ' || sentence[i] == '\n') {

            int score = v * 2 + c;

            if (score > max) {
                max = score;
                maxStart = start;
                maxEnd = i;
            }

            v = 0;
            c = 0;
            start = i + 1;
        }
        else {
            if (sentence[i] == 'a' || sentence[i] == 'e' ||
                sentence[i] == 'i' || sentence[i] == 'o' ||
                sentence[i] == 'u') {
                v++;
            }
            else {
                c++;
            }
        }
    }

    printf("Max word: ");

    for (int i = maxStart; i < maxEnd; i++) {
        printf("%c", sentence[i]);
    }

    printf("\nMax score: %d\n", max);

    return 0;
}
