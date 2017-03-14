#include <stdio.h>
#include <string.h>
int mystrcmp(char *a,char *b){
  int i;
  int ret;
  for (i = 0; a[i] != '\0' && b[i] != '\0'; i++){
    ret = a[i] - b[i];
    if (a[i] != b[i]){
      break;
    }
  }
  return ret;
}
int main (char argc, const char *argv[]){
  char a[32] = "hell";
  char b[32] = "world";
  int ret;
  ret = mystrcmp(a,b);
  printf ("%d\n",ret);
/*  if (mystrcmp(a,b) > 0){
    printf("a > b %d\n",ret);
  }
  if (mystrcmp(a,b) < 0){
    printf("a < b %d\n",ret);
  }
  if (mystrcmp(a,b) == 0){
    printf("a = b %d\n",ret);
  }*/
  return 0;
}
