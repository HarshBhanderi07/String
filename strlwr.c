#include <stdio.h>

void custom_strlwr(char *s) {
    int i = 0;
    while (s[i] != '\0') {

        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] + ('a' - 'A');
        }
        i++;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%99[^\n]", str);

    custom_strlwr(str);

    printf("Lowercase string: %s\n", str);

    return 0;
}