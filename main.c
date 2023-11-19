#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int i;
  int grade[5];
  int *gPtr;
  gPtr = grade;
  int total = 0;
  int average;
  
  for(i=0;i<5;i++)
  {
    printf("input grade[%i] = ", i);
    scanf("%d", &grade[i]);
  }
  
  for(i=0;i<5;i++)
  {
    printf("grade[%i] = %i\n", i, gPtr[i]);
    total += gPtr[i];
  }
  
  average = total / 5;
  printf("\naverage is %i\n" , average);
  
  system("PAUSE");	
  return 0;
}
