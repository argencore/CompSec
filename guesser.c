#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argsv,char **args)
{
    char question1[100];
    char question2[100];
    char *knownQuestion1 = "What is your name?";
    char *knownQuestion2 = "What is the magic number, Bob?";
    gets(question1);
    if(strcmp(question1,knownQuestion1) == 0)
    {
        printf("Bob\n");
    }
    else
    {
        printf("???");
    }
    gets(question2);
    if(strcmp(question2,knownQuestion2) == 0)
    {
        printf("2\n");
    }
    else
    {
        printf("???");
    }
    return 0;
}
