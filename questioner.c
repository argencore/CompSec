#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argsv, char **args)
{
    FILE *fp=fopen(args[1],"r");
    int magicNum =12345;
    char *line;
    char *name;
    int number;
    int size = 107;
    char *brkVal = " ";
    line = (char *)malloc(size * sizeof(char));
    name = (char *)malloc(100 * sizeof(char));
    printf("What is your name?\n");
    scanf("%s",name);
    printf("What is the magic number, %s\n",name);
    scanf("%d",&number);
    while(fgets(line,size,fp) != NULL)
    {
        char *brkpt;
        brkpt = strpbrk(line,brkVal);
        *brkpt = 0x00;
        brkpt++;
        if(strcmp(line,name) == 0)
        {
            magicNum = atoi(brkpt);
            break;
        }

    }
    if(number < magicNum)
    {
        printf("TOO LOW\n");
    }
    else if(number > magicNum)
    {
        printf("TOO HIGH\n");
    }
    else
    {
        printf("SUCCESS\n");
    }
   return 0;
}









