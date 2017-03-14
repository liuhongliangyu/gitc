#include <stdio.h>
#include <string.h>
 void  pj(char * dest, char * tag){
   printf ("<%s>%s</%s>\n",dest,tag,dest);
 }
int main(void)
{
  char a[] = "h1";
  char b[] = "h2";
  char c[] = "h3";
  char d[] = "h4";
  char e[] = "h5";
  char f[] = "h6";
  char g[] = "p";

  printf("Content type: text/html\n\n");
  printf("<html>\n");
  printf("<meta charset = \"UTF-8\">\n");
  printf("<head><title>An html page from a cgi</title>\n");
  printf("<style type=\"text/css\">");
  printf("h1,h2,h3,h4,h5,h6 {color: blue; text-align: left;}");
  printf("</style></head>");
  printf("<body>\n");
  char h1[] = "hello";
  pj(a,h1);
  char i[] = "world";
  pj(b,i);
  char i1[] = "答：广义论及时，实际指的是包括HTML、CSS和javaScript在内的一套技术组合。HTML超文本标记语言（英语：HyperText Markup Language,简称：HTML）是一种用于创建网页的标准标记语言。</p> CSS是层叠样式表（英语：Cascading Style Sheets,简写CSS），又称串样式列表、级联式列表、串接样式列表、成叠样式表，一种用来为结构化文档（如HTML文档或XML应用）添加样式（字体、间距和颜色等）的计算机语言，由W3定义和维护。</p>JavaScript一种解释型脚本语言，是一种动态类型、基于原型的语言，内置支持类。它的解释器被称为javaScript引擎，为浏览器的一部分，广泛用于客户端的脚本语言，最早是在HTML网页上使用，用来给HTML网页增加动态功能。然而现在javaScript也可被用于网络服务器，如Node.js";
  pj(g,i1);
  printf("<h1>Hello world!</h1>\n");
  printf("</body>\n");
  printf("</html>\n");

  fflush(stdout);
  return 0;
}
