#include <stdio.h>
int main(void){
  int a[5] = {1, 2, 3, 4, 5};
  int * p = &a[0];
  int i;
  for (i = 0; i < 5; i++){
    printf("%d\n", *(p++));
  }
  char b[64] = "hello world!";
  char * c = b;

  while (*c != '\0'){
    printf("%c\n", *c);
    c++;
  }
  return 0;
}
