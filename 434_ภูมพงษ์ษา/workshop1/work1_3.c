#include <stdio.h>

int main()
{
  float myNum, _result, myNum2,_result2;
  scanf("%f", &myNum);
  scanf("%f", &myNum2);
  
  _result = myNum*myNum2;
  
  printf("%.6f", _result);
  return 0;
}
