#include <stdio.h>

void h();

int main(void){
  char a;
  int status = 0;
  a = getchar();
  while (a != EOF){
    if (status == 0){

      if (a == '%')
        status++;
      else if (a == 32)
        printf ("%%20");
      else {
        status = 0;
        putchar(a);
      }
    }
    else if (status == 1){

      if (a == '2')
        status++;

      else{
        putchar('%');
        if (a == 32)
          printf ("%%20");
        else
          putchar(a);
        status = 0;
      }
    }
    else if (status == 2){

      if (a == '0')
        putchar(' ');

      else {
        putchar('%');
        putchar('2');
        if (a == 32)
          printf ("%%20");
        else
          putchar(a);
      }
      status = 0;
    }

    a = getchar();
  }

  return 0;
}
