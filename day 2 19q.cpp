#include <stdio.h>
#include <string.h>

void remove_chars(char *str1, char *str2);

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove the characters
    remove_chars(str1, str2);

    // Output the result
    printf("The second string with removed characters: %s\n", str2);

    return 0;
}

void remove_chars(char *str1, char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    int j = 0;
    for (int i = 0; i < len2; i++) {
        int found = 0;
        for (int k = 0; k < len1; k++) {
            if (str2[i] == str1[k]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            str2[j++] = str2[i];
        }
    }
    str2[j] = '\0';
}

