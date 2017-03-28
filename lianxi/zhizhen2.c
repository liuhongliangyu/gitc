#include <stdio.h>
int main(void){
  char a[10] = {1, 3, 4, 2, 5, 6, 7, 8, 0, 9};
  char b[] = "hello";
  char *p;
  int i;
  char *t;
  p = a;
  t = b;

  for (i = 0; i < 10; i++){
    printf ("%d\n",*p);
    p++;
  }
  for (i = 0; i < 10; i++){
    printf ("%c\n",*t);
    t++;
  }
  return 0;
}
