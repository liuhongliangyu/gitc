#include <stdio.h>
int main(void){
    int x = 16,y = 3;
    int b = x - 12;
    int c = y;
   if (y >= 10){
      if (b > 0){
          printf("%d:%d PM\n",b,c);
      }
      if(b < 0) {
          printf("%d:%d AM\n",x,c);
      }
      if  (b == 0){
          printf ("%d:%d PM\n",x,c);
      }
   }
   else {
      if (b > 0){
          printf("%d:0%d PM\n",b,c);
      }
      if(b < 0) {
          printf("%d:0%d AM\n",x,c);
      }
      if  (b == 0){
          printf ("%d:0%d PM\n",x,c);
      }
   }
return 0;   
}
