#include <stdio.h>

#include <string.h>

#include<stdlib.h>

char * mystrndup(char *str,int n)
{

char * p;
p=malloc(n);
memcpy(p,str,n);
return p;
}

int main(int argc,char ** argv)
{
char * dup;
char * dup1;
dup=mystrndup(argv[1],strlen(argv[1]));
dup1=mystrndup(argv[2],strlen(argv[2]));
printf("\n Duplicate string is %s and %s \n",dup,dup1);
free(dup);
free(dup1);
}
