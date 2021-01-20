#include <stdio.h>

void itob(int n, char s[], int b);

int main(void) {
	
	// Client entered integer
	int n;
	
	// Base of counting system for the new number
	int b;
	
	printf("Enter a whole number: ");
	scanf("%d", &n);
	
	// String produced from integer
	char s[n];
	
	printf("Enter a base for conversion: ");
	scanf("%d", &b);
	
	itob(n, s, b);
	
	return 0;
}

void itob(int n, char s[], int b) {
	
	return;
}
