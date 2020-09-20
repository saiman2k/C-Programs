#include<stdio.h>
int main() {
	int a;
	printf("Enter a number:");
	scanf("%d",&a);
	if(a<100)
	printf("The number is less than 100");
	else if(a==100)
	printf("The number is equal to 100");
	else
	printf("The number is greater than 100");
	return 0;
}

