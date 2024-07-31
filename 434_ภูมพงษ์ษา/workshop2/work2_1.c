#include <stdio.h>

int main()
{
  int myNum ;
  scanf("%d", &myNum);
  
  if (myNum < 50) {
    printf("Failed");
  }
  else{
    printf("Passed");
  }
  return 0;
}
