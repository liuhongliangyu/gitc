
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "cgic.h"


void HandleSubmit();
void ShowForm();
void Name();
void Age();
void Nation();
void Gender();
void Address();

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

  ShowForm();
  fprintf(cgiOut, "</BODY></HTML>\n");

  return 0;
}

void HandleSubmit(){
  Name();
  Age();
  Gender();
  Nation();
  Address();

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
char *gender[] = {
  "men",
  "women"
};
void Gender(){
int genderChoice;
cgiFormSelectSingle("gender",gender,2,&genderChoice,0);
fprintf(cgiOut, "gender: %s<BR>\n", gender[genderChoice]);


}

void Nation(){
char nation[64];
cgiFormString("nation",nation,64);
fprintf(cgiOut, "Nation: ");
cgiHtmlEscape(nation);
fprintf(cgiOut, "<br>\n");
}

void Address(){
char address[241];
cgiFormString("address",address,241);
fprintf(cgiOut, "Address: ");
cgiHtmlEscape(address);
fprintf(cgiOut, "<br>");
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
  fprintf(cgiOut, "Name<br><input type=\"text\"name=\"name\">\n");
  fprintf(cgiOut, "<br>\n");
  fprintf(cgiOut, "Age<br><input type=\"text\"name=\"age\">\n");
  fprintf(cgiOut, "<br>\n");
  fprintf(cgiOut, "Nation<br><input type=\"text\"name=\"nation\">\n");
  fprintf(cgiOut, "<br>\n");
  fprintf(cgiOut, "Gender<br>men<input type=\"radio\"name=\"gender\">\n");
  fprintf(cgiOut,"women<input type=\"radio\"name=\"gender\">\n");
  fprintf(cgiOut, "<br>");
  fprintf(cgiOut, "My Address<br><textarea name=\"address\"ROWS=4 COLS=40>\n");
  fprintf(cgiOut, "</textarea>\n");

  //  fprintf(cgiOut, "address\n");
  //  fprintf(cgiOut, "<p>\n");
  //  fprintf(cgiOut, "", );
  fprintf(cgiOut, "<BR>\n");
  fprintf(cgiOut, "<HR>\n");
  fprintf(cgiOut, "<input type=\"submit\" name=\"saveenvironment\" value=\"Save Environment\">\n");
  fprintf(cgiOut, "</form>\n");
}
