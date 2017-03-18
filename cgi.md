# 表单提交CGI

## 提交流程

编写一个index.html文件，并将这个文件复制到/var/www/html目录下。需要加sudo权限。

HTML代码：
```sh
<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <meta http-equiv="X-UA-Compatible" content="ie=edge">
  <title>Document</title>
</head>
<body>

  <form action="cgi-bin/cgi" method="GET">
      a = : <input type="text" name="a" />
      +
      b = : <input type="text" name="b" />
      <input type="submit" name="" value="Sumbit">
  </form>
</body>
</html>
```
编写一个cgi.c文件，首先将它编译成cgi文件，并将这个文件复制到/usr/lib/cgi-bin/目录下，需加sudo权限。

CGI代码：
```sh
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
  char a[100];
  long i, j;
  char *data;
  printf("Content type: text/html\n\n");
  printf("<html lang=\"en\">\n");
  printf("<meta charset=\"UTF-8\">\n");
  printf("<head><title>An html page from a cgi</title>\n");
  printf("<style type=\"text/css\">");
  printf("</style></head>");
  printf("<body>\n");
  data = getenv("QUERY_STRING");
  if(data == NULL)
    printf("error!!!\n");
  printf("%s\n", data);
  sscanf(data, "a=%ld&b=%ld", &i, &j);
  printf("fname=%ld\n", i + j);
  printf("</body>\n");
  printf("</html>\n");

  fflush(stdout);
  return 0;
}
```
完成上面两步，打开浏览器，在浏览器的地址栏中输入：[http://localhost](http://localhost)

## 在网页上制作简易计算器：
按照上面流程将下面代码提交：
```sh
<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <meta http-equiv="X-UA-Compatible" content="ie=edge">
  <title>Document</title>
</head>
<body>

  <form action="cgi-bin/cgi" method="GET">
    a = : <input type="text" name="a" />
    +<input type="radio" checked = "checked" name="name" value="0" >
    -<input type="radio" name="name" value="1" />
    *<input type="radio" name="name" value="2" />
    /<input type="radio" name="name" value="3" />
    %<input type="radio" name="name" value="4" />
    b = : <input type="text" name="b" />
    <input type="submit" name="" value="Sumbit">
  </form>
</body>
</html>
```
```sh
sudo cp index.html /var/www/html
```
```sh
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
```
```sh
gcc cgi.c
sudo cp a.out /usr/lib/cgi-bin/cgi
```
## 参考文献：
[HTML表单](http://www.w3school.com.cn/html/html_forms.asp)
