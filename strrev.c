#include <stdio.h>


int custom_strlen(const char *s) {
    int length = 0;
    while (s[length] != '\0') {
        length++;
    }
    return length;
}


void custom_strrev(char *s) {
    int left = 0;
    int right = custom_strlen(s) - 1;
    char temp;
    while (left < right) {
        temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%99[^\n]", str);

    custom_strrev(str);

    printf("Reversed string: %s\n", str);

    return 0;
}