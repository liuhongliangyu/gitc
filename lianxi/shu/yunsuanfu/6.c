#include <stdio.h>
int main(void){
  int a = 1;
  printf ("%d\n", a++ - 1);//%d = a - 1;
  printf ("%d\n",a);//%d = a++ ==> %d = a + 1;

  int b = 10, c = 5;
  printf ("%d\n", b++ - ++c);//c = c + 1, %d = b - c;
  printf ("%d %d\n",b, c);//%d = b + 1, %d = c;

  int d = 7, e = 8;
  printf ("%d\n",d++ - --e);//e = e - 1, %d = d - e;
  printf ("%d %d\n",d, e);//%d = d + 1, %d = e;

  int f = 3, g = 4, i = 5;
  printf ("%d\n",f++ - g++ + --i);//i = i - 1,%d = f - g - i;
  printf ("%d %d %d\n",f, g, i);//%d = f + 1, %d = g + 1, %d = i;
  return 0;
}
