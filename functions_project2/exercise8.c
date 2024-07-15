#include <stdio.h>
#include <math.h> // For sqrt function

// Function to calculate square root
double squareRoot(double num) {
  return squareRoot(num);
}

int main() {
  double a, b, c;
  double discriminant, root1, root2;

  // Input coefficients a, b, c
  printf("Enter coefficients (a, b, c) of quadratic equation (ax^2 + bx + c = 0): ");
  scanf("%lf %lf %lf", &a, &b, &c);

  // Calculate discriminant
  discriminant = b * b - 4 * a * c;

  // Check the nature of roots
  if (discriminant < 0) {
    printf("Roots are imaginary.\n");
  } else {
    // Calculate roots
    root1 = (-b + squareRoot(discriminant)) / (2 * a);
    root2 = (-b - squareRoot(discriminant)) / (2 * a);

    // Display roots
    printf("Root 1 = %.2lf\n", root1);
    printf("Root 2 = %.2lf\n", root2);
  }

  return 0;
}
