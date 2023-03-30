#include <stdio.h>
#include <string.h>

void reverse_string(char *str) {
    int i, j;
    char temp;

    // find the length of the string
    int len = strlen(str);

    // iterate over the characters of the string
    for (i = 0, j = len - 1; i < j; i++, j--) {
        // swap the characters
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    // reverse the string
    reverse_string(str);

    printf("Reversed string: %s\n", str);

    return 0;
}

