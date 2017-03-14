#include <stdio.h>
#include <string.h>
void *mystrcat(char * a,const char * b){
  int i,j;
  int sum = 0;
  while (a[i] != '\0'){
    sum += 1;
    i++;
  }
  while (b[j] != '\0'){
    a[j + sum] = b[j];
    j++;
  }

return a;
}
int main (int argc, const char *argv[]){
  char a[64] = "hello";
  char b[32] = "world";
  mystrcat(a,b);
  printf ("%s\n",a);
  return 0;
}
