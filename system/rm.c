#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char * argv[]){
    char rm[100] = "rm ";

    if (argc == 2){
        strcat (rm, argv[1]);
        printf ("%s\n",rm);
        system (rm);
    }
    else {
        printf ("Error!!!\n");
    }
    return 0;
}
