#include <stdio.h>
int main(void){
    int x = 2,y = 3;
    int b = x - 12;
    int c = y;
      if (b > 0){
          printf("%02d:%02d PM\n",b,c);
      }
      if(b < 0) {
          printf("%02d:%02d AM\n",x,c);
      }
      if  (b == 0){
          printf ("%02d:%02d PM\n",x,c);
      }
return 0;   
}
