#include <stdio.h>
#include <string.h>
char *pj(char *i,const char *j,const char *z){
  int t,k;
  int sum = 0;
  while (j[t] != '\0'){
    i[t] = j [t];
    t++;
    sum = sum + 1;
  }
  for (k = 0; z[k] != '\0';k++){
    i[sum + k] = z[k];
  }
  return i;
}
int main (void){
  char a[32] = "hello";
  char b[32] = "world";
  printf ("a = %s\tb = %s\n",a,b);
  char x[100];
  char *y;
  y = pj(x,a,b);
  printf ("y = %s\n",y);
  return 0;
}
