#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

int main() {
    char str1[MAX_LENGTH], str2[MAX_LENGTH], result[MAX_LENGTH];
    
    printf("Enter the first string: ");
    fgets(str1, MAX_LENGTH, stdin); // read first string
    
    printf("Enter the second string: ");
    fgets(str2, MAX_LENGTH, stdin); // read second string
    
    str1[strcspn(str1, "\n")] = '\0'; // remove newline character from first string
    str2[strcspn(str2, "\n")] = '\0'; // remove newline character from second string
    
    strcpy(result, str1); // copy first string to result
    
    strcat(result, str2); // concatenate second string to result
    
    printf("Concatenated string: %s\n", result);
    
    return 0;
}

