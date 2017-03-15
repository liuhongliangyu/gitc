#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char * argv[]){
    char cmd[100] = "cp ";
    char b[] = "\0";
    char c[] = " ";
    if (3 == argc){
        strcat (cmd, argv[1]);
        strcat (cmd, c);
        strcat (cmd, argv[2]);
        strcat (cmd, b);
        printf ("%s\n", cmd);
        system (cmd);
    }
    else {
        printf ("Error!!!\n");
    }
    return 0;
}
