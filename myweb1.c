#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sqlite3.h>
#include "cgic.h"

void ShowForm();
void HandleSubmit();
void Show();
void Insert();
void Delete();
void Update();
int a, b, c, e, f;
sqlite3 * sqlopen();

int cgiMain(void){
  cgiHeaderContentType("text/html");
  fprintf(cgiOut, "<html lang=\"en\">\n");
  fprintf(cgiOut, "<meta charset=\"UTF-8\">\n");
  fprintf(cgiOut, "<HTML><HEAD>\n");
  fprintf(cgiOut, "<TITLE>学生成绩信息</TITLE></HEAD>\n");
  fprintf(cgiOut, "<BODY background=\"http://att.bbs.duowan.com/forum/month_1102/20110214_38e54718b39a65144753vDvlu2XXAOiK.jpg\">\n");
  fprintf(cgiOut,"<H1 div style=\"width:900px;height:200px;text-align:center\" >学&nbsp&nbsp&nbsp&nbsp生&nbsp&nbsp&nbsp&nbsp成&nbsp&nbsp&nbsp&nbsp绩&nbsp&nbsp&nbsp&nbsp信&nbsp&nbsp&nbsp&nbsp息</H1>\n");
  if (cgiFormSubmitClicked("保存提交") == cgiFormSuccess){
    HandleSubmit();
  }
  if (cgiFormSubmitClicked("显示") == cgiFormSuccess){
    Show();
  }
  if (cgiFormSubmitClicked("删除") == cgiFormSuccess){
    Delete();
    Show();
  }
  if (cgiFormSubmitClicked("修改") == cgiFormSuccess){
    Update();
    Show();
  }
  if ((cgiFormSubmitClicked("显示") != cgiFormSuccess) && (cgiFormSubmitClicked("删除") != cgiFormSuccess) && (cgiFormSubmitClicked("修改") != cgiFormSuccess)){
      ShowForm();
  }

  fprintf(cgiOut, "</BODY></HTML>\n");

  return 0;
}

void HandleSubmit(){
  sqlite3 *db;
  sqlopen();
  Insert();
  db = sqlopen();
  sqlite3_close(db);
}

sqlite3 * sqlopen(){
 sqlite3  *db;
 char * errmsg;
 int ret;
 if (sqlite3_open("./db/my.db", &db) != SQLITE_OK)
 {
   printf("%s\n", sqlite3_errmsg(db));
 }
 if ((ret = sqlite3_exec(db, "create table stu(id integer, name vchar(32) not null,\
   score integer not null)", NULL, NULL, &errmsg)) != SQLITE_OK)
 {
   if (ret != 1)
   {
     printf("%s\n", errmsg);
     sqlite3_close(db);
   }
 }
 return db;
}

void Insert(){
  char id[81], name[81], score[81];
  char sql[128];
  char * errmsg;
  int idt, scoret;
  sqlite3 *db;
    fprintf(cgiOut, "<form div style=\"width:600px; height:200px;text-align:center\"  >\n");
  cgiFormStringNoNewlines("id", id, 81);
  fprintf(cgiOut, "学&nbsp号:");
  cgiHtmlEscape(id);
  fprintf(cgiOut, "<BR>\n");
  cgiFormStringNoNewlines("name", name, 81);
  fprintf(cgiOut, "姓&nbsp名:");
  cgiHtmlEscape(name);
  fprintf(cgiOut, "<BR>\n");
  cgiFormStringNoNewlines("score", score, 81);
  fprintf(cgiOut, "成&nbsp绩:");
  cgiHtmlEscape(score);
  fprintf(cgiOut, "<BR>\n");
  fprintf(cgiOut, "</form>\n");
  idt = atoi(id);
  scoret = atoi(score);
  db = sqlopen();
  if (idt != 0){
    if (*name != 0){
      sprintf(sql, "insert into stu values(%d, '%s', %d)", idt, name, scoret);
      if (sqlite3_exec(db, sql, NULL, NULL, &errmsg) != SQLITE_OK){
      	 printf("%s\n", errmsg);
       }
     }
     else {
      e = 1;
     }
   }
   else
   f = 1;
}

void Delete(){
  sqlite3 * db;
  char number[81];
  char sql[128];
  char * errmsg;
  int did;
  db = sqlopen();
  cgiFormStringNoNewlines("id",number,81);
  did = atoi(number);
    //对接收到的数据进行拼接，完成插入。
  if (did != 0){
      sprintf(sql, "delete from stu where id = %d", did);
    	if (sqlite3_exec(db, sql, NULL, NULL, &errmsg) != SQLITE_OK){
    		     printf("%s\n", errmsg);
    	}
      sqlite3_close(db);
    }
  else {
    a = 1;
  }
}
void Update(){
  sqlite3 * db;
  char up[81], up1[81];
  char sql[128];
  char * errmsg;
  int id, score;
  db = sqlopen();
  cgiFormStringNoNewlines("id", up, 81);
  cgiFormStringNoNewlines("score", up1, 81);
  id = atoi(up);
  score = atoi(up1);
  //对接收到的数据进行拼接，完成插入。
  if (id != 0){
    if (score != 0){
      sprintf(sql, "update stu set score = %d  where id = %d", score,id);
    	if (sqlite3_exec(db, sql, NULL, NULL, &errmsg) != SQLITE_OK){
    		  printf("%s\n", errmsg);
    	}
    }
    else {
      b = 1;
    }
  }
  else {
    c = 1;
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
  if (sqlite3_get_table(db, "select *from stu order by id", &result, &nrow, &ncolumn, &errmsg) != SQLITE_OK)
  {
    printf("%s\n", errmsg);
  }
  else
  {
    temp = result;
    fprintf(cgiOut, "<table border=\"1\" div style=\"width:900px; height:200px;text-align:center\"  >\n");
    for (i = 0; i < nrow + 1; i++)
    {
      fprintf(cgiOut, "<tr>\n");
      for (j = 0; j < ncolumn; j++)
        printf("<td align=\"center\">%-15s</td>", *(temp++));
      //putchar(10);
      fprintf(cgiOut, "</tr>\n");
    }
  fprintf(cgiOut, "</table>\n");
  }
  sqlite3_free_table(result);
  sqlite3_close(db);
  fprintf(cgiOut, "<form div style=\"width:900px;height:200px;text-align:center\" method=\"POST\" enctype=\"multapart/form-data\" ");
  fprintf(cgiOut, "action=\" ");
  cgiValueEscape(cgiScriptName);
  fprintf(cgiOut, "\">\n");
  fprintf(cgiOut, "<br>\n");
  fprintf(cgiOut, "学&nbsp号:<input type=\"text\"name=\"id\"><br>\n");
  if (a == 1 || c == 1){
    fprintf(cgiOut, "学号是空！\n");
  }
  fprintf(cgiOut, "<br>成&nbsp绩:<input type=\"text\"name=\"score\"><br>\n");
  if (b == 1){
    fprintf(cgiOut, "成绩是空！\n");
  }
  fprintf(cgiOut, "<br><input type=\"submit\" name=\"删除\" value=\"删除信息\">\n");
  fprintf(cgiOut, "<input type=\"submit\" name=\"修改\" value=\"修改成绩\">\n");
  fprintf(cgiOut, "<input type=\"submit\" name=\"返回\" value=\"返回\">\n");
  fprintf(cgiOut, "</form>\n");
}

void ShowForm(){
  fprintf(cgiOut, "<form div style=\"width:900px;height:200px;text-align:center\" method=\"POST\" enctype=\"multapart/form-data\" ");
  fprintf(cgiOut, "action=\" ");
  cgiValueEscape(cgiScriptName);
  fprintf(cgiOut, "\">\n");
  fprintf(cgiOut, "<br>学&nbsp号:<input type=\"text\"name=\"id\"><br>\n");
  if (f == 1){
    fprintf(cgiOut, "学号是空！\n");
  }
  fprintf(cgiOut, "<br>姓&nbsp名:<input type=\"text\"name=\"name\"><br>\n");
  if (e == 1){
    fprintf(cgiOut, "姓名是空！\n");
  }
  fprintf(cgiOut, "<br>成&nbsp绩:<input type=\"text\"name=\"score\"><br>\n");
  fprintf(cgiOut, "<br>\n");
  fprintf(cgiOut, "<input type=\"submit\" name=\"保存提交\" value=\"提交信息\">\n");
  fprintf(cgiOut, "<input type=\"submit\" name=\"显示\" value=\"显示成绩单\">\n");
  fprintf(cgiOut, " <input type=\"reset\" value=\"清空\">\n");
  fprintf(cgiOut, "</form>\n");
}
