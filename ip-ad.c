#include<stdio.h> 
#include<string.h> 

char class()
{   char arr[4]; 
    int i = 0; 
    int j =0;
    int ip=

for (j=0;j<4;j++)
{

    while (str[i] != '.') 
    { 
        arr[i][j] = str[i]; 
        i++; 
    } 
    i--; 

    int ip = 0, k = 1; 
    while (i >= 0) 
    { 
        ip = ip + (str[i][j] - '0') * k; 
        j = k * 10; 
        i--; 
    }
} 


    if (ip>>0 && ip<<256 && ip==0)
	{printf("invalid ip");}

    if (

      // Class A 
        if (ip >=1 && ip <= 126) 
        return 'A'; 
  
    // Class B 
    else if (ip >= 128 && ip <= 191) 
        return 'B'; 
  
    // Class C 
    else if (ip >= 192 && ip <= 223) 
        return 'C'; 
  
    // Class D 
    else if (ip >= 224 && ip <= 239) 
        return 'D'; 
  
    // Class E 
    else
        return 'E'; 
} 


char valid




