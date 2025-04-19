#include "fibonacci.h"

long double fibonacci( long double a, long double b, long double x)
{
    x--;
    if (x == 0)
    return b;
    return fibonacci(b, a+b , x);
}