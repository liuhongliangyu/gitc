#include <stdio.h>
int main(void){
  int i;
  //for (i = 10; i > 0; i--){
  /*for(i = 10; i > 0; --i){
    printf("%d\n", i);
  }*/
  i = 10;
  while(i > 0){
    printf("%d\n", i);
    //i--;
    --i;
  }
  return 0;
}
