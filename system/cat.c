#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char * argv[]){
  char cat[64] = "cat ";
  if (argc = 2){
    strcat (cat, argv[1]);
    printf ("%s\n",cat);
    system (cat);
  }
  else
    printf ("Error\n");
  return 0;
}
