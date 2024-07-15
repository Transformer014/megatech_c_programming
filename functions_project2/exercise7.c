#include <stdio.h>

long int x_to_the_n(int x, int n) {
  long int result = 1;
  int i;

  // Multiply result by x, n times
  for (i = 0; i < n; ++i) {
    result *= x;
  }

  return result;
}

int main() {
  int x, n;
  long int result;

  // Input values of x and n
  printf("Enter the base (x): ");
  scanf("%d", &x);
  printf("Enter the exponent (n): ");
  scanf("%d", &n);

  // Calculate x^n using the function
  result = x_to_the_n(x, n);

  // Output the result
  printf("%d^%d = %ld\n", x, n, result);

  return 0;
}
