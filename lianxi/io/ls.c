#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <dirent.h>
#include <sys/types.h>

int main(int argc, char const *argv[]) {
  DIR * dir;
  struct dirent * dt;

  if ((dir = opendir("./copy")) == NULL){
    perror ("fail to opendir the dir");
    return -1;
  }

  while ((dt = readdir(dir)) != NULL){
    if (dt->d_name[0] != '.'){
      printf("%s\n", dt->d_name);
    }
  }

  closedir(dir);
  return 0;
}
