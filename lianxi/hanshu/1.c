#include <stdio.h>
void zhuanhuan();
void bianhuan();



int main (void){
  //bianhuan();
  zhuanhuan();

  return 0;
}

void zhuanhuan(){
  char a;
  a = getchar();

  while (a != EOF) {
    if (a == 32){
      printf ("%%20");
    }
    else {
      printf ("%c",a);
    }
    a = getchar();
  }
  printf ("\n");

}


void bianhuan(){
  int a;
  int status = 0;

  while ((a = getchar()) != EOF){
      if (status == 0){
          if (a == '%'){
              status++;
          }
          else {
              status = 0;
              putchar(a);
          }
      }
      else if (status == 1){
          if (a == '2'){
              status++;
          }
          else {
              putchar('%');
              putchar(a);
              status = 0;
          }

      }
      else if (status == 2){
          if (a == '0'){
              putchar(' ');
          }
          else {
              putchar('%');
              putchar('1');
              putchar(a);

          }
          status = 0;
      }

    }

}
