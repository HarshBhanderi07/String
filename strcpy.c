#include <stdio.h>

int custom_strlen(const char *s) {

    int length;

    for (length = 0; s[length] != '\0'; length++);

    return length;
}
void custom_strcpy(char *t, const char *s) {
    int i = 0;

    while ((t[i] = s[i]) != '\0') {
        i++;
    }
}
int main() {

    char input_string[100];
    char copied_string[100];

    printf("Enter a string: ");

    scanf("%99[^\n]", input_string);

    custom_strcpy(copied_string, input_string);

    int len = custom_strlen(input_string);

    printf("\nOriginal string: \"%s\"\n", input_string);
    printf("Copied string:   \"%s\"\n", copied_string);
    printf("The length of the string is: %d\n", len);

    return 0;
}

