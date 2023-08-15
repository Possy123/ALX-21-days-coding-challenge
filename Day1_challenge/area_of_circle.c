#include <stdio.h>


int main(int radius, int area)
{
	printf( "Enter radius (i.e. 10):" );
	scanf( "%d", &radius );
	area = (3.14159 * radius * radius);
	printf( "\nArea = %d\n", area );
	return 0;
}
