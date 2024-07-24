#include <stdio.h>


int int_size() {
  int x = -1;
  int count = 0;


  while (x != 0) {
    x = x >> 1;
    count++;
  }

  return count;
}

int main() {
  int size = int_size();
  printf("Number of bits in an int on this machine: %d\n", size);
  return 0;
}
