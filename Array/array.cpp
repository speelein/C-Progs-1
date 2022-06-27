#include <stdio.h>
int a = 100;

int main()
{
    int arrayspee[] = {1, 400, 9, 16, 25};
    // int arrayspee [1] = {100};  // funktionirt nicht
    a = arrayspee[1];
    printf("a ist %d\n", a);
    return(a);
}