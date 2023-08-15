#include <stdio.h>

int main(int x, int y)
{
	for (x = 0; x < 10; x++, printf("\n"))
		for (y = 0; y < 10; y++)
			printf("%c", 1);

	return 0;
}
