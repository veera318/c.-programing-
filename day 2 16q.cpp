#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, len;
    int is_palindrome = 1;
    
    printf("Enter a string: ");
    fgets(str, 100, stdin); // read input string
    
    len = strlen(str) - 1; // exclude newline character
    
    for (i = 0, j = len - 1; i < len / 2; i++, j--) {
        if (str[i] != str[j]) {
            is_palindrome = 0; // not a palindrome
            break;
        }
    }
    
    if (is_palindrome) {
        printf("%s is a palindrome\n", str);
    } else {
        printf("%s is not a palindrome\n", str);
    }
    
    return 0;
}

