#include <stdio.h>
#include <string.h>
void kb(char *i,const char *j){
  int t = 0;
  while (j[t] != '\0'){
    i[t] = j[t];
    t++;
    printf ("a = %s\tb = %s\n",i,j);
  }
}
int main (){
  char a[64];
  char b[64] = "hello BJ!";
  kb(a,b);
  return 0;
}
