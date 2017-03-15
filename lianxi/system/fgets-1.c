#include <stdio.h>
int main (void){
  char s[80];
  fgets (s, 80, stdin);
  printf ("%s",s);
  return 0;
}
