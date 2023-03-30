#include <stdio.h>

int isComposite(int num) {
    int i;
    if (num <= 1) {
        return 0;
    }
    for (i = 2; i <= num/2; i++) {
        if (num % i == 0) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int arr[] = {16, 18, 27, 16, 23, 21, 19};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i, count = 0;
    for (i = 0; i < n; i++) {
        if (isComposite(arr[i])) {
            count++;
        }
    }
    printf("Number of Composite Numbers = %d\n", count);
    return 0;
}
