#include <stdio.h>
#include <string.h>

int compairString(char *str)
{
    int buffsize = 100;
    char *test = "this is a string";
    if(sizeof(str) > buffsize)
    {
        return -5;
    }
    return strcmp(test,str);
}

int main(int argsv, char **args)
{
    int retVal = compairString(args[1]);
    printf("the return value is: %d",retVal);
    return 0;
}

