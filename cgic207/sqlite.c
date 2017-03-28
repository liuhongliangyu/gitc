#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sqlite3.h>
#include "cgic.h"


void HandleSubmit();
void ShowForm();
void Name();
void Age();
void Id();
int do_insert(sqlite3 *db);


int cgiMain(void){

  sqlite3 *db;
	char *errmsg;

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

  if (sqlite3_open("./db/my.db", &db) != SQLITE_OK)
	{
		printf("%s\n", sqlite3_errmsg(db));
		return -1;
	}

	int ret;

  if ((ret = sqlite3_exec(db, "create table stu(id, name, age)", NULL, NULL, &errmsg)) != SQLITE_OK)
	{
		if (ret == 1)
		{
			printf("%s\n", errmsg);
			sqlite3_close(db);
			return -1;
		}
	}

  ShowForm();
  fprintf(cgiOut, "</BODY></HTML>\n");

  return 0;
}

void HandleSubmit(){
  Id();
  Name();
  Age();
  do_insert(sqlite3 *db, int id, char * name, int age);
}

void Id(){
  char id[81];
  cgiFormString("id",id,81);
  fprintf(cgiOut, "Id:");
  cgiHtmlEscape(id);
  fprintf(cgiOut, "<BR>\n");
}

void Name(){
  char name[81];
  cgiFormStringNoNewlines("name",name,81);
  fprintf(cgiOut, "Name: ");
  cgiHtmlEscape(name);
  fprintf(cgiOut, "<BR>\n");
}

void Age(){
  char age[81];
  cgiFormString("age",age,81);
  fprintf(cgiOut, "Age:");
  cgiHtmlEscape(age);
  fprintf(cgiOut, "<BR>\n");
}


void ShowForm(){
  fprintf(cgiOut, "<!--2.0:multipart/form-data is required for file uploads. -->");
  fprintf(cgiOut, "<form method=\"POST\" enctype=\"multapart/form-data\" ");
  fprintf(cgiOut, "action=\" ");
  cgiValueEscape(cgiScriptName);
  fprintf(cgiOut, "\">\n");
  fprintf(cgiOut, "<H2>\n");
  fprintf(cgiOut, "个人信息\n");
  fprintf(cgiOut, "</H2>\n");
  fprintf(cgiOut, "Id<br><input type=\"text\"name=\"id\">\n");
  fprintf(cgiOut, "<br>\n");
  fprintf(cgiOut, "Name<br><input type=\"text\"name=\"name\">\n");
  fprintf(cgiOut, "<br>\n");
  fprintf(cgiOut, "Age<br><input type=\"text\"name=\"age\">\n");
  fprintf(cgiOut, "<br>\n");

  fprintf(cgiOut, "<BR>\n");
  fprintf(cgiOut, "<HR>\n");
  fprintf(cgiOut, "<input type=\"submit\" name=\"saveenvironment\" value=\"Save Environment\">\n");
  fprintf(cgiOut, "</form>\n");
}

int do_insert(sqlite3 *db)
{
	int id;
	char name[32] = {0};
	int age;
	char sql[128] = {0};
	char *errmsg;

	sprintf(sql, "insert into stu values(%d, '%s', %d)", id, name, age);
	if (sqlite3_exec(db, sql, NULL, NULL, &errmsg) != SQLITE_OK)
	{
		printf("%s\n", errmsg);
		return -1;
	}

	printf("\e[32minsert OK !\e[0m\n");
	return 0;
}
