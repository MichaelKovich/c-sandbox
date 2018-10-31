#include <stdio.h>

int main()
{
  int p;
  int i;

  int primes[50] = {0}; // Initializing all values to zero
  int primeIndex = 2;

  int isPrime = 0;

  primes[0] = 2;
  primes[1] = 3;

  for (p = 5; p <= 100; p = p + 2)
  {
    isPrime = 1;

    for (i = 1; isPrime && p / primes[i] >= primes[i]; i++)
      if (p % primes[i] == 0)
        isPrime = 0;

    if (isPrime)
    {
      primes[primeIndex] = p;
      primeIndex++;
    }
  }

  for (i = 0; i < primeIndex; i++)
    printf("%i ", primes[i]);

  return 0;
}