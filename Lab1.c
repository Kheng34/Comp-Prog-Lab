#include <stdio.h>

int a, b, c, tot, aver;

int main() {
	printf("Please enter first number: ");
	scanf("%d", &a);
	printf("Please enter second number: ");
	scanf("%d", &b);
	printf("Please enter third number: ");
	scanf("%d", &c);
	tot = a + b + c;
	aver = tot / 3;
	printf("\nTotal: %d", tot);
	printf("\nAverage: %d", aver);
	return 0;
}
