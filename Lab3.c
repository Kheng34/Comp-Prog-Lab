#include <stdio.h>

int h, a, area;

int main(){
	printf("Please enter height: ");
	scanf("%d", &h);
	printf("Please enter floor length: ");
	scanf("%d", &a);
	area = (a * h) / 2;
	printf("Area: %d", area);
	return 0;
}
