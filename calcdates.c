#include <stdio.h>

int sum=0;

void Y(int n)
{
	if(n/4)
		sum+=366;
	else
		sum+=365;
		
		Y(n-1);
}

void main()
{  printf("enter the start date in DD-MM-YYYY format");
   scanf("%d-%d-%d",&day1,&mon1,&yr1);

   printf("enter the end date in DD-MM-YYYY format");
   scanf("%d-%d-%d",&day2,&mon2,&yr2);
   


}
