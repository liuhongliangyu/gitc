#include <sqlite3.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc,char *argv[])
{
  sqlite3 **db;
  int result;

  if(argc < 2)
  {
    fprintf(stderr,"usage : %s argv[1].\n",argv[0]);
    exit(EXIT_FAILURE);
  }

  result = sqlite3_open(argv[1],&db);
  if(result != SQLITE_OK)
  {
    printf("Fail to sqlite3 open %s : %s.\n",argv[1],sqlite3_errmsg(db));
    exit(EXIT_FAILURE);
  }

  result = sqlite3_close(db);
  if(result != 0)
  {
    printf("Fail to sqlite3 close %s : %s.\n",argv[1],sqlite3_errmsg(db));
    exit(EXIT_FAILURE);
  }

  exit(EXIT_SUCCESS);
}
