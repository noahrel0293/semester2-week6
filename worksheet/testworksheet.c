#include <stdio.h>
#include <stdlib.h>

void reverse_array(int *arr, int n) {
  // TODO: Implement this function
  int i;
  for(i = 0; i < (n/2); i++){
    int c = *(arr + i);
    *(arr + i) = *(arr - 1 - i);
    *(arr - 1 - 1) = c;
  }
}

int main() {
  int myNumbers[4] = {25, 50, 75, 100};
  
  // arraytest(&myNumbers);
  reverse_array(myNumbers, 4);
  printf("%ls\n", myNumbers);
  return 0;
}