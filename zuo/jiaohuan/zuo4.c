#include <stdio.h>
int main (void){
  char a;
  a = getchar ();
  int s = 0;
  int z = 0;
  int sum;
  while (a != EOF){
    printf ("%c",a);
    a = getchar();
    if (a >= 48 && a <= 57){
      s = s + 1;
    }
    else if (a >= 65 && a <= 90 || a >= 97 && a <= 122){
      z = z + 1;
    }
  }
  sum = s + z;
  printf ("s = %d\t",s);
  printf("z = %d\t",z);
  printf ("sum = %d\n",sum);
  return 0;
}
