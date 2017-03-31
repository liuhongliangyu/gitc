#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char const *argv[]) {
  int fdr, fdw;
  int bytes;
  char buf[64] = {0};

  if ((fdr = open(argv[1], O_RDONLY)) < 0){
    printf("打开只读文件失败\n");
    return -1;
  }

  if ((fdw = open(argv[2], O_WRONLY|O_CREAT|O_TRUNC, 0666)) < 0){
    printf("打开只写文件失败\n");
    return -1;
  }

  while((bytes = read(fdr, buf, sizeof(buf))) >0){
    write(fdw, buf, bytes);
  }
  close(fdr);
  close(fdw);
  return 0;
}
