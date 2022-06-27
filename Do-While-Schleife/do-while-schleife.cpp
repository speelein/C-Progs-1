/*
 * die do Schleife wird auf alle Faelle einmal ausgefuehrt egal
 * was darin steht an Unsinn.
 */


#include <stdio.h>
#include "do.h"

int main(int argc, char **argv)
{	
	int a = 12;
	static int b;
	do {
		printf(" a ist %d\n" , a);
		a++;
	}
	while(a < 30);
	printf(" a ist %d\n", a);


	int sum(b);
	printf(" b ist %d\n", b);

	return 0;
}

