#include <stdio.h>
#include <string.h>
void kb(char *i,char *j){
  int t = 0;
  while (j[t] != '\0'){
    i[t] = j[t];
    t++;
  }
  printf ("a = %s\tb = %s\n",i, j);
}
int main (void){
  char a[64];
  char b[32] = "hello world!";
  printf ("a = %s\tb = %s\n",a,b);
  kb(a,b);
  return 0;
}
