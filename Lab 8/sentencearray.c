#include <stdio.h>

int main() {
    const int max = 100;
    char sentence[max];

    printf("Enter a sentence: ");
    fgets(sentence, 100, stdin);

    printf("Sentence entered: %s\n", sentence);

    return 0;
}
