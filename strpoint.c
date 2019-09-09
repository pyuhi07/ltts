#include <stdio.h>

void main()
{

	/*char *x="Ruhi";
	char n[] = "Ruhi";
	//int *y=&x;
	printf("%s\n",x);
	printf("%c\n",n);
	printf("%s\n",n);*/

 //char *t="anubhav";
	//printf("%s\n",t+t[3]-t[0]);
//here t[3] is b and t[0] is a in anubhav , so b-a is 1, so it starts printing from t+1


	char a[20]="ruhidon";
	//printf("%s\n",a+a[4]-a[3]);
	a[4]='\0';
	printf("%s\n",a);
}
