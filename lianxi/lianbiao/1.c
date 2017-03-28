#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Books
{

  int book_id;
  char title[49];
};

int main(void){
  struct Books book; //= {"xxxxx", 1234};

  struct Books book1;
  book1.book_id = 1235;
  strcpy(book1.title, "yyyy");
  printf("sizeof = %ld\n", sizeof(book));
}
