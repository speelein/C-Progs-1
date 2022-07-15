/* Mit else if kann man enlos viele weitere Bedingeungen abfragen
 * Nicht vergessen geschweifte Klammern zu setzen
 * Nicht vergessen bei Vergleich == zu verweenden
 *  == ist eine relationaler Operator ( <, > ,= ,! ,  <= , >=)
 *  a++; a--;
 * logische Operatoren   ( || , &&, ) und und oder
 * 
 * 
 * */


#include <stdio.h>
//#include "potenz"

int main(int argc, char **argv)
{
	int a = -3;
	int b = 112;
	int c =123;
//	int scanf(a);
	if ( a <= -50){
		printf(" a + b ist %d\n", a+b);
	}
		if(a+b < 1) {
			printf(" b ist %d\n", b);
		}
		else if ( b == 15) {
			printf(" a ist %d\n", a);
		}
		else {

			c = a * b + c;
			printf(" c ist %d\n", c);

		
		}
	return 100;
}

