#include <stdio.h>

typedef struct spee spee; // nur in C nicht in C++ noetig ( spee reicht fuer angabe statt struct spee )

struct spee
{
    int wert;
    char haus[20];
    float k = 2.0;
};

int main()
{

    spee a = {16, "gahlgal", 5.234};
    spee b = {20, "P", 6.234};
    spee d = {400, "hoppla", 7.234};
    int x = a.wert;
    float y = a.k;
    char z[] = "Gunter";
    printf("a ist %d , k ist %f, name ist %s\n", x, y, z);
    float c = a.k;
    printf("a ist %f\n", c);
    puts(a.haus);
    puts(b.haus);
    puts(d.haus);
    // b.haus = "nun"; // warum nicht??
    // puts(d.haus);
    // putchar(a.haus);
    // printf("a ist %f\n", puts(a.haus));
}