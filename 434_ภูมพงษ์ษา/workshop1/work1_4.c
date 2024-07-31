
#include <stdio.h>

int main()
{
  float myNum, _result, myNum2, myNum3;
  scanf("%f", &myNum);
  scanf("%f", &myNum2);
  scanf("%f", &myNum3);
  
  _result = (myNum+myNum2+myNum3)/3;
  
  printf("%.2f", _result);
  return 0;
}
