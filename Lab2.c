#include <stdio.h>

int a, b;

int main() {
	printf("Please enter first number: ");
	scanf("%d", &a);
	printf("\nPlease enter second number: ");
	scanf("%d", &b);
	if(a == b) {
		printf("\nNumbers are equal");
	}
	else if(a < b) {
		printf("\nSecond is greater");
	}
	else {
		printf("\nFirst is greater");
	}
	return 0;
}
