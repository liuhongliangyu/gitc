#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char * argv[]){
  char mv[64] = "mv ";
  char a[] = " ";
  if (argc = 3){
    strcat (mv, argv[1]);
    strcat (mv, a);
    strcat (mv, argv[2]);
    printf ("%s\n",mv);
    system (mv);
  }
  else
    printf ("Error\n");
  return 0;
}
