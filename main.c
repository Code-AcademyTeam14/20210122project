#include <stdio.h>

/* *
 * Напишете функция void itob(int n, char s[], int b), 
 * която преобразува цяло число n в низ s базиран на основа b. 
 * Например itob( n, s[], 16) представя числото n като шеснадесетично число в стринга s[].
 * */

void itob(int n, char s[], int b);

int main(void) {
	
	// Client entered integer
	int n = 1;
	
	// Base of counting system for the new number
	int b = 2;
	
	printf("Enter a whole number: ");
	scanf("%d", &n);
	
	while (n < 0) {
		printf("\nEnter a valid whole number (greater than 0): ");
		scanf("%d", &n);
	}
	
	// String produced from integer
	char s[n];
	
	printf("\nEnter a base for conversion: ");
	scanf("%d", &b);
	
	while (b < 2 || b > 36) {
		printf("\nEnter a valid base for conversion (between 2 and 36): ");
		scanf("%d", &b);
	}
	
	itob(n, s, b);
	
	return 0;
}

void itob(int n, char s[], int b) {
	
	int count = 0;
	
	printf("\n%d (10) -> ", n);
	
	do {
		s[count] = '0' + n % b;
		if (n % b > 9) {
			s[count] = 'A' + (n % b);
		}
		count++;
		n /= b;
	} while (n > 0);

	while (count-- > 0) {
		printf("%c", s[count]);
	}

	printf(" (%d)\n", b);
	
	return;
}
