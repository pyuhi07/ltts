#include <stdio.h>

void strhaig(char *d ,char *s)
{ 
	while(*d++=*s++);
	printf("copied string is %s\n",d);
}

void strcopy( char d[6],char s[6])
{  for (int i=0;i<6;i++)
	{ d[i]=s[i];}
	printf("copied string is %s\n",d);
}

int strcomp( char str1[6],char str2[6])
{
	for (int i=0;i<6;i++)
		{ if (str1[i]==str2[i])
			return 0;
		  else 
			return 1;
		}
}

int strsee(char big[11],char small[4])
{    int flag=0;
     int x;
    for (int i=0;i<11;i++)
   {
	 
	if (big[i]==small[i])
		{ x=i;
	
			for (int j=x;j<4;j++)
		 	   { if (big[j]==small[j])
			      {				
				flag==1;
			      }	
			    }	
		}
	
    }
	
	if(flag==1)
	{for (int i=x;i<11;i++)
		{printf("%s",big[i]);}
	}
	else 
	printf("no match\n");
}





void main()
{
	char* r="Ruhi";
	char* t="tanvi";
	char a[6]="Darcy";
	char b[6]="Darcy";
	char z[11]="ruhidongre";
	char y[4]="don";
	
	//strcopy(r,t);
	//printf ("%d\n",strcomp(a,b));
	//strsee(z,y);
	strhaig(r,t);
	
}
