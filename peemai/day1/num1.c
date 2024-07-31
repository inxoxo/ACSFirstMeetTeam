#include <stdio.h>

int main()
{
  int myNum, _result, myNum2,_result2;
  scanf("%d", &myNum);
  scanf("%d", &myNum2);

  _result = myNum/myNum2;
  _result2 = myNum%myNum2;

  printf("%d", _result);
  printf(",");
  printf("%d", _result2);
  return 0;
}