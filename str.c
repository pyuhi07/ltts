#include <stdio.h>
#include <string.h>

void main()
{ char str1[]="ruhi dongre";
  char str2[6]="tanvi";
  char str3[12];
  char str4[10];
  char str5[4]="don";
  

	strcpy(str3,str1);
 	printf("%s copy successful\n",str3);

	strncpy(str4,str2,11);
	printf("%s is copied string \n",str4);

	char *f;
	//f= strstr(str1,str5);
	  //f= strstr(str1,"don");
	printf("the string was found %s\n",strstr(str3,"don"));
	//char d[]="Good Morning";
	//printf("%s",strstr(d,"Good"));

}
 
