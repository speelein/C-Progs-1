#include <stdio.h>
// Moeglichkeit fuer anders als Enum
// static const int open   = 0; // static = nicht ausserhalb sichtbar
// static const int closed = 0; // const  = nicht veraenderbar
// static const int fault  = 0; // aber nicht noetig fuer enum
// static const int test   = 0;

enum mState
{
    open,
    closed,
    fault,
    test
};
typedef enum mState mState;

int main(void)
{

    mState s = test;

    if (s == fault)
    {
        // tu das oser das
        puts("open");
    }

    else if (s == closed)

    {

        puts("closed");
    }
    else if (s == test)
    {

        puts("test");
    }

    else if (s == fault)
    {

        puts("fault");
    }

    puts("weiter");

    return (s);
}