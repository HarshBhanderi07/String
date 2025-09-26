#include <stdio.h>

int custom_strlen(const char *s) {

    int length;

    for (length = 0; s[length] != '\0'; length++);


    return length;
}

int main() {

    char input_string[100];


    printf("Enter a string: ");

    scanf("%99[^\n]", input_string);


    int len = custom_strlen(input_string);


    printf("The string you entered is: \"%s\"\n", input_string);
    printf("Its length is: %d\n", len);

    return 0;
}

