#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>

void Create(){
  int fd = open("./file", O_RDONLY|O_CREAT,0666);
}

void Read(){
  char buf[64] = "\0";
  int fd = open("./file", O_RDONLY);
  int len = read(fd,buf,63);
  printf("%s\n", buf);
}

void Write(){
  char buf[64] = "hello world!";
  int fd = open("./file", O_WRONLY);
  int len = write(fd,buf,strlen(buf));
  printf("&&&&\n");
}

void CLOSE(){
  int close (int fd);
}

int main (void){
  Create();
  Read();
  Write();
  Read();
  CLOSE();
  return 0;
}
