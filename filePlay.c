#include <stdio.h>
#include <stdlib.h>

int filePlay(FILE fp)
{
    char sp[107];
    int count = 0;
    while(getline(&sp,107,fp) != NULL)
    {
        printf("%s\n",sp);
        count++;
    }
    return count;
}

int main(int argsv, char **args)
{
    if(argsv > 0)
    {
        filePlay(args[1]);
    }
    return 0;
}

