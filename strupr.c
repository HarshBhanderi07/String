#include <stdio.h>

void custom_strupr(char *s) {
    int i = 0;
    while (s[i] != '\0') {

        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - ('a' - 'A');
        }
        i++;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%99[^\n]", str);

    custom_strupr(str);

    printf("Uppercase string: %s\n", str);

    return 0;
}