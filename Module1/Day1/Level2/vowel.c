#include <stdio.h>

int is_vowel(char ch) {
    int isVowel;

    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            isVowel = 1;
            break;
        default:
            isVowel = 0;
            break;
    }

    return isVowel;
}

int main() {
    char character;
    printf("Enter a character: ");
    scanf(" %c", &character);

    int result = is_vowel(character);

    if (result == 1) {
        printf("Vowel\n");
    } else {
        printf("Not Vowel\n");
    }

    return 0;
}
