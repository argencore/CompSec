#include <stdio.h>
#include <stdlib.h>

int filePlay(FILE * fp)
{
    char *sp;
    int size = 107;
    sp = (char *)malloc(size * sizeof(char));
    int count = 0;
    while(fgets(sp,size,fp) != NULL)
    {
        printf("%s",sp);
        count++;
    }
    return count;
}

int main(int argsv, char **args)
{   
    if(argsv > 0)
    {
        FILE *fp=fopen(args[1],"r");
        int numLines = filePlay(fp);
        printf("the number of lines is: %d",numLines);
    }
    return 0;
}

