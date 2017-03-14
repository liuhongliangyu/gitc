#include <stdio.h>

int main(int argc,const char * argv[]){//整数类型主函数（整数类统计参数个数，字符类型指针数组指向字符串参数。）
  int i;
  printf ("argc = %d\n",argc);//统计参数个数
  for(i = 0; i < argc; i++){
    printf ("argv[%d] = %s\n",i, argv[i]);//输出字符串。
  }
  return 0;
}
