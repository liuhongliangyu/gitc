#include <stdio.h>
int add(int a,int b){
  int sum;
  sum = a + b;
  printf("a = %d\tb = %d\n",a, b);
  printf("sum = %d\n",sum);
  return sum;
}
int stutract(int a, int b){
  int sum;
  sum = a - b;
  printf ("a = %d\tb =%d\n",a, b);
  printf ("sum = %d\n",sum);
  return sum;
}
int multiply(int a, int b){
  int sum;
  sum = a * b;
  printf("a = %d\tb = %d\n",a, b);
  printf("sum = %d\n",sum);
  return sum;

}
int divide(int a, int b){
  int sum;
  sum = a / b;
  printf("a = %d\tb = %d\n",a, b);
  printf("sum = %d\n",sum);
  return sum;
}
int main(char argc,const char *argv[]){
  int i, j;
  i = 10;
  j = 5;
  int f;
  if (argv[1][0] == '/'){
    f = divide(i, j);
    printf ("sum = %d\n",f);
  }
  if (argv[1][0] == '+'){
    f = add(i,j);
    printf ("sum = %d\n",f);
  }
  if (argv[1][0] == '-'){
    f = stutract(i,j);
    printf ("sum = %d\n",f);
  }
  if (argv[1][0] == '*'){
    f = multiply(i,j);
    printf ("sum = %d\n",f);
  }
  return 0;
}
