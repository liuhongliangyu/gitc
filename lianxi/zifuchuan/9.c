#include <stdio.h>
#include <string.h>
void jh(int *i,int *j){
  int c;
  c = *i;
  *i = *j;
  *j = c;
  printf ("a = %d\tb = %d\t",*i,*j);
  printf ("\n");
}
int main (void){
  int a = 10;
  int b = 20;
  printf ("a = %d\tb = %d\t",a,b);
  printf ("\n");
  jh(&a,&b);
  return 0;
}
