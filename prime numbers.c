#include<stdio.h>
int isprime(int num)
int main ()  {
	int lower, upper, i, flag;
	printf("enter the lower limit: ");
	scanf("%d", &lower);
	printf("enter the upper limit:");
	scanf("%d", &upper)
	printf("prime number between %d and %d are: ", lower, upper);
	for (i=lower; i<= upper; i++){
		flag = isprime(i);
		if (flag == 1){
			printf("%d ", i);
		}
	}
	return 0;
}
int isprime(int num) {
	int i;
	if (num <=1){
		return 0;
	}
}
return 1;
}
