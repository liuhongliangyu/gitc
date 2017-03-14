#include <stdio.h>
#include <string.h>
int main(void)
{
  printf("Content type: text/html\n\n");
  printf("<html>\n");
  printf("<head><title>An html page from a cgi</title>\n");
  printf("<style type=\"text/css\">");
  printf("h1,h2,h3,h4,h5,h6 {color: blue; text-align: left;}");
  printf("</style></head>");
  printf("<body>\n");
  printf("<h1>Hello world!</h1>\n");
  printf("</body>\n");
  printf("</html>\n");

  fflush(stdout);
  return 0;
}
