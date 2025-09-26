#include <stdio.h>


int custom_strcmp(const char *s1, const char *s2) {
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i]) {
            return s1[i] - s2[i];
        }
        i++;
    }

    return s1[i] - s2[i];
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    scanf("%99[^\n]", str1);
    getchar(); 

    printf("Enter second string: ");
    scanf("%99[^\n]", str2);

    int result = custom_strcmp(str1, str2);

    if (result == 0) {
        printf("Strings are equal.\n");
    } else if (result < 0) {
        printf("First string is less than second string.\n");
    } else {
        printf("First string is greater than second string.\n");
    }

    return 0;
}