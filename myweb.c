#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sqlite3.h>
#include "cgic.h"

void Show();
void ShowForm();
void HandleSubmit();
sqlite3 * sqlopen();
void Insert();
void Delete();
void Update();


int cgiMain(void){
  cgiHeaderContentType("text/html");
  fprintf(cgiOut, "<html lang=\"en\">\n");
  fprintf(cgiOut, "<meta charset=\"UTF-8\">\n");
  fprintf(cgiOut, "<HTML><HEAD>\n");
  fprintf(cgiOut, "<TITLE>学生成绩信息</TITLE></HEAD>\n");
  fprintf(cgiOut, "<BODY><H1>学生成绩信息</H1>\n");
  if (cgiFormSubmitClicked("保存提交") == cgiFormSuccess){
    HandleSubmit();
    fprintf(cgiOut, "<hr>\n");
  }
  if (cgiFormSubmitClicked("显示") == cgiFormSuccess){
    Show();
  }
  if ((cgiFormSubmitClicked("保存提交") != cgiFormSuccess) && (cgiFormSubmitClicked("显示") != cgiFormSuccess)){
      ShowForm();
  }
/*  if (cgiFormSubmitClicked("返回") == cgiFormSuccess){
      ShowForm();
  }*/
  fprintf(cgiOut, "</BODY></HTML>\n");

  return 0;
}

void HandleSubmit(){
  sqlite3 *db;
  sqlopen();
  Insert();
  Delete();
  Update();
  Show();
  db = sqlopen();
  sqlite3_close(db);
}

sqlite3 * sqlopen(){//创建打开数据库，判断是否已有同名数据库，如果没有 则创建。
 sqlite3  *db;
 char * errmsg;
 int ret;
 if (sqlite3_open("./db/my.db", &db) != SQLITE_OK)
 {
   printf("%s\n", sqlite3_errmsg(db));
 }
 if ((ret = sqlite3_exec(db, "create table stu(id integer, name vchar(32) not null,\
   score integer not null)", NULL, NULL, &errmsg)) != SQLITE_OK)
 {//当sqlite3_exec的返回值不等于SQLITE_OK（0）的时候，进入语句。
   if (ret != 1)//当返回值等于1时，则说明已有数据库，当返回值是不为1和0的任意数时，则出现错误。并关闭数据库。
   {
     printf("%s\n", errmsg);
     sqlite3_close(db);
   }
 }
 return db;//返回值db。
}

void Insert(){
  char id[81];
  char name[81];
  char score[81];
  char sql[128];
  char * errmsg;
  int idt, scoret ;
  sqlite3 *db;
  cgiFormStringNoNewlines("id", id, 81);
  cgiHtmlEscape(id);
  cgiFormStringNoNewlines("name", name, 81);
  cgiHtmlEscape(name);
  cgiFormStringNoNewlines("score", score, 81);
  cgiHtmlEscape(score);
  idt = atoi(id);//转换类型，将上面获得的id和score字符串转换为int型
  scoret = atoi(score);
  db = sqlopen();//获取创建数据库时获得的句柄，赋予给db。
  sprintf(sql, "insert into stu values(%d, '%s', %d)", idt, name, scoret);
  if (sqlite3_exec(db, sql, NULL, NULL, &errmsg) != SQLITE_OK){
    	printf("%s\n", errmsg);
  }
  sqlite3_close(db);

}

void Delete(){
  sqlite3 * db;
  char number[81];
  char sql[128];
  char * errmsg;
  int did;
  db = sqlopen();
  cgiFormStringNoNewlines("delete",number,81);
  did = atoi(number);
    //对接收到的数据进行拼接，完成插入。
  sprintf(sql, "delete from stu where id = %d", did);
	if (sqlite3_exec(db, sql, NULL, NULL, &errmsg) != SQLITE_OK){
		     printf("%s\n", errmsg);
	}
  sqlite3_close(db);
}

void Update(){
  sqlite3 * db;
  char up[81], up1[81];
  char sql[128];
  char * errmsg;
  int id, score;
  db = sqlopen();
  cgiFormStringNoNewlines("update", up, 81);
  cgiFormStringNoNewlines("update1", up1, 81);
  id = atoi(up);
  score = atoi(up1);
  //对接收到的数据进行拼接，完成插入。
  sprintf(sql, "update stu set score = %d  where id = %d", score,id);
	if (sqlite3_exec(db, sql, NULL, NULL, &errmsg) != SQLITE_OK){
		  printf("%s\n", errmsg);
	}
  sqlite3_close(db);
}

void Show(){
  sqlite3 *db;
  db = sqlopen();
  char *errmsg;
  char **result, **temp;
  int nrow;
  int ncolumn;
  int i, j;
  //select*form stu order by id:查询stu表数据，按照id值顺序排序。
  if (sqlite3_get_table(db, "select *from stu order by id", &result, &nrow, &ncolumn, &errmsg) != SQLITE_OK)
  {
    printf("%s\n", errmsg);
  }
  else
  {
    temp = result;
    fprintf(cgiOut, "<table border=\"5\">\n");
    for (i = 0; i < nrow + 1; i++)
    {
      fprintf(cgiOut, "<tr>\n");
      for (j = 0; j < ncolumn; j++)
        printf("<td>%-15s</td>", *(temp++));
      //putchar(10);
      fprintf(cgiOut, "</tr>\n");
    }
  fprintf(cgiOut, "</table>\n");
  }
  sqlite3_free_table(result);
  sqlite3_close(db);
  fprintf(cgiOut, "<form method=\"POST\" enctype=\"multapart/form-data\" ");
  fprintf(cgiOut, "action=\" ");
  cgiValueEscape(cgiScriptName);
  fprintf(cgiOut, "\">\n");
  fprintf(cgiOut, "<input type=\"submit\" name=\"返回\" value=\"返回\">\n");
  fprintf(cgiOut, "</form>\n");
}

void ShowForm(){
  fprintf(cgiOut, "<form method=\"POST\" enctype=\"multapart/form-data\" ");
  fprintf(cgiOut, "action=\" ");
  cgiValueEscape(cgiScriptName);
  fprintf(cgiOut, "\">\n");
  fprintf(cgiOut, "学号:<input type=\"text\"name=\"id\">\n");
  fprintf(cgiOut, "<br>姓名:<input type=\"text\"name=\"name\">\n");
  fprintf(cgiOut, "<br>成绩:<input type=\"text\"name=\"score\">\n");
  fprintf(cgiOut, "<H2>修改成绩</H2>\n");
  fprintf(cgiOut, "学号:<input type=\"text\"name=\"update\">\n");
  fprintf(cgiOut, "<br>成绩:<input type=\"text\"name=\"update1\">\n");
  fprintf(cgiOut, "<H2>删除信息</H2>\n");
  fprintf(cgiOut, "学号:<input type=\"text\"name=\"delete\">\n");
  fprintf(cgiOut, "<br>\n");
  fprintf(cgiOut, "<input type=\"submit\" name=\"保存提交\" value=\"提交信息\">\n");
  fprintf(cgiOut, "<input type=\"submit\" name=\"显示\" value=\"显示成绩单\">\n");
  fprintf(cgiOut, "</form>\n");
}
