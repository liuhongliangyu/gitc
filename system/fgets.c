#include <stdio.h>
int main (void){
  char buf[200];
  while (fgets(buf, 200, stdin) != NULL){
    printf ("%s",buf);
  }
  return 0;
}
