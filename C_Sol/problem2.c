#include <stdio.h>

int main(int argc, char const *argv[])
{
	int fibo = 2;
	int problemSum = 0;
	int i = 1;

	while (fibo < 4000000) {
		if (fibo % 2 == 0) {
			problemSum += fibo;
		}

		int temp = fibo + i;
		i = fibo;
		fibo = temp;
	}

	printf("Sum of fibonacci even terms under 4,000,000: %i\n", problemSum);
	
	return 0;
}