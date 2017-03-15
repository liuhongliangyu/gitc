#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char * argv[]){
  char touch[64] = "touch ";
  if (argc = 2){
    strcat (touch, argv[1]);
    printf ("%s\n",touch);
    system (touch);
  }
  else
    printf ("Error\n");
  return 0;
}
