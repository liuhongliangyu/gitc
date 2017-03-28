#include <stdio.h>

long fa(int n){
  long result;
  if (n == 0 || n == 1){
    result = 1;
  }
  else {
    result = fa(n - 1) * n;
  }
  printf ("%ld\n",result);

  return result;
}




int main(void){
  int n;
  printf("Enter a number: ");
  scanf("%d",&n);

  printf ("%ld\n",fa(n));
  return 0;
}
