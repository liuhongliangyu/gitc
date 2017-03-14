#include <stdio.h>
#include <string.h>
int mystrlen(int argc, const char *b){
   int i;
   int sum = 0;
   while (b[i] != '\0'){
     sum += 1;
     i++;
   }
   return sum;
}
int main(int argc, const char *argv[]){
  char a[32] = "liuhongliang";
  int j,r;
  r = mystrlen(j,a);

  printf ("sum = %d\n",r);
  return 0;
}
