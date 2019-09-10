#include<stdio.h> 
#include<string.h> 

/*void main()
{
char *name[] = {"ravi","ravindra","ravindralala"};
printf("%s\n",*name+1);
printf("%s\n",*(name+1));
printf("%s\n",*(name+2)+7);
printf("%s\n",*(name+1)+11);



}*/


void main()
{ int a[]={10,20,30,40,50,60};
  int *p[]={a,a+1,a+2,a+3,a+4,a+5};
  int **pp=p;
  printf("%s\n",p);
  printf("%s\n",*p);
  printf("%s\n",pp);
  
  //pp++;

  printf("%d %d %d",pp-p,*pp-a,**pp);
}
