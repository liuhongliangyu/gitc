#include <stdio.h>
#include <string.h>
char *mystrcpy(char  * a, const char * b){
  int i = 0;
  while (b[i] != '\0'){
    a[i] = b[i];
    i++;
  }
  a[i] = '\0';
  return a;
}



int main(void){
  char a[55];
  char b[] = "hello liu";
  mystrcpy(a,b);
  printf("%s\n",a);
  return 0;
}
