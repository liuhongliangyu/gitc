#include <stdio.h>

int main(int argc,const char * argv[]){
  int i;
  int a = 10;
  int b = 5;
  printf ("argc = %d\n",argc);
  for(i = 0; i < argc; i++){
    printf ("argv[%d] = %s\n",i, argv[i]);
  }
  if (argv[1][0] == '+'){
    printf ("sum = %d\n",a + b);
  }
  if (argv[1][0] == '*'){
    printf ("sum = %d\n",a * b);
  }
  if (argv[1][0] == '-'){
      printf ("sum = %d\n",a - b);
  }
  if (argv[1][0] == '/'){
    printf ("sum = %d\n",a / b);
  }
  return 0;
}//输入./a.out ‘+’或‘-’或‘*/’或‘/’，输出所对应的运算及结果。
