#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char statement[100];
    int vowels = 0;
    
    printf("Enter a statement: ");
    fgets(statement, 100, stdin); // read input statement
    
    // convert to lowercase
    for (int i = 0; statement[i] != '\0'; i++) {
        statement[i] = tolower(statement[i]);
    }
    
    // count vowels
    for (int i = 0; statement[i] != '\0'; i++) {
        if (statement[i] == 'a' || statement[i] == 'e' || statement[i] == 'i' || statement[i] == 'o' || statement[i] == 'u') {
            vowels++;
        }
    }
    
    printf("Number of vowels in the statement: %d\n", vowels);
    
    return 0;
}

