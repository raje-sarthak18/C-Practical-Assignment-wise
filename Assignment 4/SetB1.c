#include <stdio.h>
#include <math.h>

int isPrime(int x)
{
    if (x == 2 || x == 3)
    {
        return 1;
    }
    else
    {

        for (int i = 2; i <= sqrt(x); i++)
        {
            if (x % i == 0)
            {
                return 0;
            }
        }
    }
    return 1;
}

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d -- %d\n", i, isPrime(i));
    }
}