#include <stdio.h>


int testPrime (int n, int checker)
{
    if (checker >= n && n > 1)
    {
        return (1);
    } else if (n % checker == 0 || n <= 1)
    {
        return (0);
    }
    return (testPrime(n, checker + 1));
}

int is_prime_number(int n)
{
   return testPrime(n, 2);
}

int main(void)
{
    int r;

    r = is_prime_number(1);
    printf("%d\n", r);
    r = is_prime_number(1024);
    printf("%d\n", r);
    r = is_prime_number(16);
    printf("%d\n", r);
    r = is_prime_number(17);
    printf("%d\n", r);
    r = is_prime_number(25);
    printf("%d\n", r);
    r = is_prime_number(-1);
    printf("%d\n", r);
    r = is_prime_number(113);
    printf("%d\n", r);
    r = is_prime_number(7919);
    printf("%d\n", r);
    return (0);
}