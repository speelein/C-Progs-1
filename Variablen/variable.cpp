#include <stdio.h>

#define PI 3.145667765667 // Praeprozessordirektive Konstante

const float l = 56752.35464564;
const double h = 5.34455647;
double a = 3.347545656545645643;
float b = 4.4556;
double c = a / b;

int main(int argc, char **argv)

{

	printf("%f\n", PI);
	printf("%f\n", a);
	printf("%f\n", b);
	printf("%f\n", c);
	printf("%f\n", a * b);
	printf("%f\n", h);
	printf("%f\n", l);
	return 0;
}
