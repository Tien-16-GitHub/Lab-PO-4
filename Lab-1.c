#include <stdio.h>

int main(){
	double d;
	char c;
	printf("Enter a real number:");
	scanf("%lf", &d);
	printf("Enter a character:");
	scanf("\n%c", &c);
	printf("Real number: %lf\n", d);
	printf("Character: %c\n", c);
	return 0;
}
