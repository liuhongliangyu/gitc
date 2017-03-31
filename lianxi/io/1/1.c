#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>


#define FILE_NAME "example.dat"
int main (void){
  int  fp;
  char buf[64] = "\0";
  int fd;
  int len;
  char buf1[64] = "hello world!";
  int fd1;
  int len1;
  fd1 = open("./file", O_WRONLY);
  fd = open("./file", O_RDONLY);
  fp = open("./file", O_RDONLY|O_CREAT, 0666);

  len = read (fd, buf, 63);
  printf("%s\n", buf);

  len1 = write(fd1, buf1, strlen(buf1));
  printf("len1 = %s\n", buf1);
  int close(int fp);
  return 0;
}
