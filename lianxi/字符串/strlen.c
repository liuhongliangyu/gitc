#include <stdio.h>
#include <string.h>
int main (int argc,const char *argv[]){
  char str[15] = "hello";
  int len = 0;
  int i;

  len = strlen(str);
  printf ("strlen(str) = %d\n",len);
  printf ("sizeof(str) = %lu\n",sizeof(str));
  for (i = 0; i < 15; i++){
    printf ("str[%d] = %d\n",i,str[i]);
  }
  return 0;
}
