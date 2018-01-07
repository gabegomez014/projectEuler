#include <stdio.h>

int main(int argc, char const *argv[])
{
	int total = 0;

	for(int i = 0; i < 1000; i++) {
		int remainder3 = i % 3;
		int remainder5 = i % 5;

		if (remainder5 == 0 || remainder3 == 0) {
			total += i;
		}
	}

	printf("The sum of all multiple 3 and 5 below 1000 is: %d\n", total);

	return 0;
}