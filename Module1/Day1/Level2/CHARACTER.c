#include <stdio.h>
#include <ctype.h>

int get_character_type(char ch) {
    if (isupper(ch)) {
        return 1;
    } else if (islower(ch)) {
        return 2;
    } else if (isdigit(ch)) {
        return 3;
    } else if (isprint(ch)) {
        return 4;
    } else {
        return 5;
    }
}

int main() {
    char character;
    printf("Enter a character: ");
    scanf(" %c", &character);

    int type = get_character_type(character);

    switch (type) {
        case 1:
            printf("Type: Uppercase Letter\n");
            break;
        case 2:
            printf("Type: Lowercase Letter\n");
            break;
        case 3:
            printf("Type: Digit\n");
            break;
        case 4:
            printf("Type: Printable Symbol\n");
            break;
        case 5:
            printf("Type: Non-Printable Symbol\n");
            break;
        default:
            printf("Invalid character\n");
    }

    return 0;
}
