#include <stdio.h>
#include <string.h>

int tokenize(char *str, char *brkVal)
{
    char *brkpt;
    brkpt = strpbrk(str,brkVal);
    *brkpt = 0x00;
    brkpt++;
    printf("%s\n%s",str,brkpt);
    return 0;
}

int main(int argsv, char **args)
{
    char *space = " ";
    tokenize(args[1],space);
    return 0;
}
