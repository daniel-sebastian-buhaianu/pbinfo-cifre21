#include <stdio.h>

int main()
{
	unsigned short n, i, count = 0;
	unsigned x;
	char found;

	scanf("%hu", &n);

	for (i = 0; i < n; i++) {
		scanf("%u", &x);
		
		found = 0;

		if (x == 0) found = 1;

		while (x && !found) {
			if (x % 10 == 0) found = 1;

			x /= 10;
		}

		if (found) count++;
	}

	printf("%hu", count);

	return 0;
}
// scor 100/100
