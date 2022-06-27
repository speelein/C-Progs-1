#include <stdio.h>

int main (void)
{
int a = 42;

int *p = &a;
*p = 13;

return(a);

}