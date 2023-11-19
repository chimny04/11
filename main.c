#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main(int argc, char *argv[])
{
  int a = 3;
  int b = 5;
  swap(&a, &b);
  printf("a: %i, b: %i\n", a, b);
  
  system("PAUSE");	
  return 0;
}
