#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sqlite3.h>
#include "cgic.h"

void Data();
void ShowForm();
void HandleSubmit();
void ShowData();
void NoSubmit();
int do_insert();
int ShowDelete();
int ShowUpdate();
//void ShowUpdate();
sqlite3 * sqlopen();//定义sqlite3型指针，指向sqlopen。

int cgiMain(void){
  cgiHeaderContentType("text/html");
  fprintf(cgiOut, "<html lang=\"en\">\n");
  fprintf(cgiOut, "<meta charset=\"UTF-8\">\n");
  fprintf(cgiOut, "<HTML><HEAD>\n");
  fprintf(cgiOut, "<TITLE>个人信息</TITLE></HEAD>\n");
  fprintf(cgiOut, "<BODY><H1>个人信息</H1>\n");
  if (cgiFormSubmitClicked("saveenvironment") == cgiFormSuccess){
    HandleSubmit();
    fprintf(cgiOut, "<hr>\n");
  }


  if (cgiFormSubmitClicked("show") == cgiFormSuccess){
    ShowData();

  }
  if (cgiFormSubmitClicked("delete") == cgiFormSuccess){
    fprintf(cgiOut, "<hr>\n");
    ShowDelete();
  }

  if (cgiFormSubmitClicked("update") == cgiFormSuccess){
      ShowUpdate();
  }

  if (cgiFormSubmitClicked("show") != cgiFormSuccess){
    if (cgiFormSubmitClicked("delete") != cgiFormSuccess){
      if (cgiFormSubmitClicked("update") != cgiFormSuccess){
        ShowForm();
      }
    }
  }

  fprintf(cgiOut, "</BODY></HTML>\n");

  return 0;
}
void HandleSubmit(){
  sqlite3 *db;//定义sqlite3型指针指向句柄db。
  sqlopen();
  Data();
  db = sqlopen();//获得sqlopen的句柄返回值，赋予给db。
  sqlite3_close(db);//关闭sqlite3数据库。注：有开就要有关。打开sqlite3_open的句柄与sqlite3_close的句柄要一样，因为打开的是同一个数据库。
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

int ShowUpdate(){
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
  ShowData();
  sqlite3_close(db);
  return 0;
}

int ShowDelete(){
  sqlite3 * db;
  char number[81];
  char sql[128];
  char * errmsg;
  int id;
  db = sqlopen();
  if (cgiFormStringNoNewlines("number",number,81) == 0){
    id = atoi(number);
    //对接收到的数据进行拼接，完成插入。
    sprintf(sql, "delete from stu where id = %d", id);
	   if (sqlite3_exec(db, sql, NULL, NULL, &errmsg) != SQLITE_OK){
		     printf("%s\n", errmsg);
	   }
  }
  else {
    fprintf(cgiOut, "ID IS NULL!\n");
  }
  ShowData();
  sqlite3_close(db);
  return 0;
}
//定义一个返回值为int型调用函数，实现在sqlite3数据库中插入功能。定义参数。
int do_insert(sqlite3 *db, int id, char * name, int score){
  char sql[128];
  char * errmsg;
  //对接收到的数据进行拼接，完成插入。
  sprintf(sql, "insert into stu(id, name, score) values (%d, '%s', %d);", id, name, score);
	if (sqlite3_exec(db, sql, NULL, NULL, &errmsg) != SQLITE_OK){
		  printf("%s\n", errmsg);
	}

  return 0;
}

void Data(){
  char id[81];
  char name[81];
  char score[81];
  int idt, scoret ;
  sqlite3 *db;//定义一个sqlite3指针,指向db
  if (cgiFormStringNoNewlines("id", id, 81) == 0){
    fprintf(cgiOut, "ID:");
    cgiHtmlEscape(id);
    fprintf(cgiOut, "<BR>\n");
    if (cgiFormStringNoNewlines("name", name, 81) == 0){
      fprintf(cgiOut, "Name:");
      cgiHtmlEscape(name);
      fprintf(cgiOut, "<BR>\n");
      cgiFormStringNoNewlines("score", score, 81);
      fprintf(cgiOut, "Score:");
      cgiHtmlEscape(score);
      idt = atoi(id);//转换类型，将上面获得的id和score字符串转换为int型
      scoret = atoi(score);
      db = sqlopen();//获取创建数据库时获得的句柄，赋予给db。
      do_insert(db, idt, name, scoret);//定义一个调用函数。定义的函数在此函数上面，以便调用。
    }
    else {
      fprintf(cgiOut, "Name is NULL\n");
    }
  }
  else {
    fprintf(cgiOut, "Id is NULL\n");
  }
}

void ShowForm(){
  fprintf(cgiOut, "<form method=\"POST\" enctype=\"multapart/form-data\" ");
  fprintf(cgiOut, "action=\" ");
  cgiValueEscape(cgiScriptName);
  fprintf(cgiOut, "\">\n");
  fprintf(cgiOut, "ID:<br><input type=\"text\"name=\"id\">\n");
  fprintf(cgiOut, "<BR>\n");
  fprintf(cgiOut, "Name:<br><input type=\"text\"name=\"name\">\n");
  fprintf(cgiOut, "<BR>\n");
  fprintf(cgiOut, "Score:<br><input type=\"text\"name=\"score\">\n");
  fprintf(cgiOut, "<BR>\n");
  fprintf(cgiOut, "<HR>\n");
  fprintf(cgiOut, "<input type=\"submit\" name=\"saveenvironment\" value=\"Save Environment\">\n");
  fprintf(cgiOut, "<input type=\"submit\" name=\"show\" value=\"Show Data\">\n");

  fprintf(cgiOut, "<BR>\n");
  fprintf(cgiOut, "ID:<input type=\"text\"name=\"number\">\n");

  fprintf(cgiOut, "<input type=\"submit\" name=\"delete\" value=\"Delete\">\n");
  fprintf(cgiOut, "<BR>\n");
  fprintf(cgiOut, "ID:<input type=\"text\"name=\"update\">\n");
  fprintf(cgiOut, "Score:<input type=\"text\"name=\"update1\">\n");
  fprintf(cgiOut, "<input type=\"submit\" name=\"update\"value=\"Update\">\n");
  fprintf(cgiOut, "</form>\n");
}

void ShowData(){
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
  //fprintf(cgiOut, "<input type=\"submit\" name=\"delete\" value=\"Delete\">\n");
  //fprintf(cgiOut, "<input type=\"submit\" name=\"update\" value=\"Update\">\n");
  sqlite3_free_table(result);
  sqlite3_close(db);

}
