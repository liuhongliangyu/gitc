#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
  char a[200];
  long i, j;
  int k;
  char *data;



  printf ("Content type: text/html\n\n");
  printf ("<html lang=\"en\">\n");
  printf ("<meta charset=\"UTF-8\">\n");
  printf ("<head><title>An html page from a cgi</title>\n");
  printf ("<style type=\"text/css\">");
  printf ("</style></head>");
  printf ("<body>\n");


    data = getenv("QUERY_STRING");
      if (data == NULL)
        printf ("error!!!\n");
      //  printf ("%s\n",data);


  sscanf(data, "a = %ld&name= %d&b = %ld",&i, &k, &j);
  if (k == 0){
    printf ("fname = %ld\n",i + j);
  }
 if (k == 1){
    printf ("fname = %ld\n",i - j);
  }
 if (k == 2){
    printf ("fname = %ld\n",i * j);
  }
 if (k == 3){
    printf ("fname = %.2lf\n",i * 1.0 / j);
  }
 if (k == 4){
    printf ("fname = %ld\n",i % j);
  }
  printf ("</body>\n");
  printf ("</html>\n");

  fflush(stdout);
  return 0;
}
