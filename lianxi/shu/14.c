#include <stdio.h>

int main(void){
  int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, sum, tmp, total;
  printf("Enter the first digit: ");
  scanf("%1d",&d);
  printf("Enter first group of five digits: ");
  scanf("%1d%1d%1d%1d%1d",&i1, &i2, &i3, &i4, &i5);
  printf("Enter second group of five digits: ");
  scanf("%1d%1d%1d%1d%1d",&j1, &j2, &j3, &j4, &j5);

  sum = d + i2 + i4 + j1 + j3 + j5;
  tmp = i1 + i3 + i5 + j2 + j4;
  total = 3 * sum + tmp;

  printf ("%d\n",9 - ((total - 1) % 10));

  return 0;// 计算通用产品代码的校验位 0 24600 01003 0 最后一个‘0’即为校验位。
}
// 输入 0    输入 24600   输入 01003     即输出校验位 0。
