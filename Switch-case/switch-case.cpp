/*
 Durch einsetzen von note werden verschiedene Ergebnisse ausgegeben!
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	char note = 'A';
	switch (note)
	{
	case 'A': printf( " super " );
				break;
	case 'B': printf( " gut " );
				break;
	case 'C': printf( " ausreichend " );
				break;
	case 'D': printf( " genuegend " );
				break;
	case 'E': printf( " ungenuegend " );
				break;
	default:
		printf( "sie bekamen keine Note " );
	}
	return 0;
}

