#include <stdio.h>
#include <string.h>
int main(void)
{
  int i;
  printf("Content type: text/html\n\n");
  printf("<html lang = \"en\">\n");
  printf("<meta charset = \"UTF-8\">\n");
  printf("<head><title>An html page from a cgi</title>\n");
  printf("<style type=\"text/css\">");
  printf("h1 {color: black; text-align: left;font - style:bold;}");
  printf("h2 {color: black; text-align: left;font - style:bold;}");
  printf("h3 {color: black; text-align: left;font - style:normal;}");
  printf("h4 {color: black; text-align: left;}");
  printf("h4 p {white - space:normal;};ul {list - style - type:dot}");
  printf("h5 {color: black; text-align: left;}");
  printf("h6 {color: black; text-align: left;}");
  printf("</style></head>");
  printf("<body>\n");
//  for (i = 0; i < 10; i++){
  //  printf("<h1>Hello world!</h1>\n");
//}
  printf("<h1>全栈H5课程市场咨询培训</h1>\n");
  printf("<h2>1.HTML5导论</h1>\n");
  printf("<h2>什么是HTML5[1]</h1>\n");
  printf("<p>答：广义论及时，实际指的是包括HTML、CSS和javaScript在内的一套技术组合。HTML超文本标记语言（英语：HyperText Markup Language,简称：HTML）是一种用于创建网页的标准标记语言。</p> CSS是层叠样式表（英语：Cascading Style Sheets,简写CSS），又称串样式列表、级联式列表、串接样式列表、成叠样式表，一种用来为结构化文档（如HTML文档或XML应用）添加样式（字体、间距和颜色等）的计算机语言，由W3定义和维护。</p>JavaScript一种解释型脚本语言，是一种动态类型、基于原型的语言，内置支持类。它的解释器被称为javaScript引擎，为浏览器的一部分，广泛用于客户端的脚本语言，最早是在HTML网页上使用，用来给HTML网页增加动态功能。然而现在javaScript也可被用于网络服务器，如Node.js。</p>\n");
  printf("<h3>发展史[3]</h1>\n");
  printf("<p><li> HTML 1.0———在1993年6月作为互联网工程小组（IETF）工作草案发布（并非标准）;</p><li>HTML 2.0————1995年11月作为RFC1866发布，在RFC 2854于2000年6月发布之后被宣布已经过时</p><li>HTML 3.2————1997年1月14日，W3C推荐标准;</P><li>HTML 4.0————1997年12月18日，W3C推荐标准</p><li>HTML 4.01（微小改进）————1999年12月24日，W3C推荐标准</p><li>HTML 5————2014年10月28日，W3C推荐标准</p>万维网联盟（World Wide Web Consortium,W3C），又称W3C理事会。1994年10月在麻省理工学院计算机科学试验室成立。创建者是互联网的发明者蒂姆·伯纳斯-李。</li>\n");
  printf("<h2>原来HTML4和现在的HTML5的差异</h1>\n");
  printf("<p>从HTML语法本身也有很大的变化，HTML5增加了更多的新的元素在里面。</p>HTML语言：</p>\n");
  printf ("<table border = \"1\" cellpedding = \"0\" cellspacing = \"0\"><tr><th>HTML4</th><th>HTML5</th></tr><tr><td>单一标记性语言</td><td>增加了了新元素，例如有画图元素，多媒体元素等</td></tr><tr><td>程序接口DOM</td><td>增加了列多的API接口，如：离线数据库存储、文档编辑、拖拽控制等</td</tr></table><text-align:center>\n");
  printf ("<p>编程语言：</p>");
  printf ("<table border = \"1\" cellpedding = \"0\" cellspacing = \"0\"><tr><th>HTML4</th><th>HTML5</th></tr><tr><td>前端：HTML，CSS，JavaScript</td><td>JavaScript</td></tr><tr><td>后端：PHP，C，Perl等</td><td>JavaScript</td</tr></table><text-align:center>\n");
  printf ("<p>数据库：</p>");
  printf ("<table border = \"1\" cellpedding = \"0\" cellspacing = \"0\"><tr><th>HTML4</th><th>HTML5</th></tr><tr><td>关系型数据库，mysql等</td><td>非关系型数据库，如MongoDB</td></tr></table><text-align:center>\n");
  printf ("<p>服务器的架：</p>");
  printf ("<table border = \"1\" cellpedding = \"0\" cellspacing = \"0\"><tr><th>HTML4</th><th>HTML5</th></tr><tr><td>Linux + mysq; + php + apache</td><td>Docker + NodelJS or Meteor</td></tr></table><text-align:center>\n");
  printf ("<p>图片：</p>");
  printf("<img src = \"http://p1.bpimg.com/1949/445be84bb2061c23s.jpg\" width = \"500\" height = \"500\">\n");

  printf("<body background = \"http://pic.90sjimg.com/back_pic/u/00/01/53/12/55ecfb7a16ade.jpg\" width = \"1300\" height = \"2500\">\n");
  printf("</body>\n");
  printf("</html>\n");

  fflush(stdout);
  return 0;
}
