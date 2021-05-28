#include <stdio.h>

#include "eden.h"

int main(void) {
	printf("Hello World\n"); //Debugging/test stuff
	printf("pi is equal to %lf\n", pi);
	printf("e is equal to %lf\n", e);
	printf("phi is equal to %lf\n", phi);
	printf("8 + 2 is %i\n", 8+2);
	printf("8 - 2 is %i\n", 8-2);
	printf("8 * 2 is %i\n", 8*2);
	printf("8 / 2 is %i\n", 8/2);
	printf("square root of 4 is %lf\n", sqroot(4));
	printf("square root of 2 is %lf\n", sqroot(2));
	printf("square root of -1 is %lf\n", sqroot(-1));
	printf("square root of 0 is %lf\n", sqroot(0));
	return 0;
}
