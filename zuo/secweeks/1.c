#include <stdio.h>
#include <string.h>
void jh(int *i,int *j){
  int c;
  c = *i;
  *i = *j;
  *j = c;
  printf ("a = %d\tb = %d\n",*i,*j);
}
int main (void){
  int a = 10;
  int b = 20;
  printf ("a = %d\tb = %d\n",a,b);
  jh(&a,&b);
  return 0;
}
