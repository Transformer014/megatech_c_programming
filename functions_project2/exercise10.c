#include <stdio.h>

int prime(int num)
{
  // If the number is less than or equal to 1, it's not prime
  if (num <= 1) {
    return 0;
  }

  for (int i = 2; i * i <= num; i++) {

    if (num % i == 0) {
      return 0;
    }
  }

  // If no divisors were found, then num is prime
  return 1;
}

int main() {
  int num;
  printf("Enter a number to check if it's prime: ");
  scanf("%d", &num);

  if (prime(num)) {
    printf("%d is a prime number.\n", num);
  } else {
    printf("%d is not a prime number.\n", num);
  }

  return 0;
}
