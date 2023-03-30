#include <stdio.h>

int main() {
   int arr[] = {16, 18, 27, 16, 23, 21, 19};
   int n = sizeof(arr)/sizeof(arr[0]); // determine number of elements in array
   int sum = 0;

   // calculate sum of elements in array
   for(int i = 0; i < n; i++) {
      sum += arr[i];
   }

   float avg = (float)sum/n; // calculate average

   printf("Sum = %d\n", sum);
   printf("Average = %.2f", avg); // print average with 2 decimal places

   return 0;
}
