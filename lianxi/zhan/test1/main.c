#include <stdio.h>
#include <stdlib.h>
#include "zhan.h"
int main(void){
  STACK S;
  int val;
  int i;

  init(&S);

  push(&S, 1);
  push(&S, 2);
  push(&S, 3);
  push(&S, 4);
  push(&S, 5);
  push(&S, 6);

  traverse(&S);

  if (pop(&S, &val) == 1){
    printf("遍历成功，出栈元素为%d：\n", val);
  }
  else {
    printf("出栈失败！\n");
  }

  traverse(&S);
//  clear(&S);
  //traverse(&S);
  return 0;
}
