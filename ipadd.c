/*#include <stdio.h>

void main()
{ char *ip;
  printf("enter the ip addres");
  gets(*ip);
  printf("%s",ip);
//separate  digits by "." , then convert string inpput to digits, check each input from 0 to 255
  

}*/

// C program to determine class, Network 
// and Host ID of an IPv4 address
 
#include<stdio.h> 
#include<string.h> 
  
// Function to find out the Class 
char findClass(char str[]) 
{ 
    // storing first octet in arr[] variable 
    char arr[4]; 
    int i = 0; 
    while (str[i] != '.') 
    { 
        arr[i] = str[i]; 
        i++; 
    } 
    i--; 
  
    // converting str[] variable into number for 
    // comparison 
    int ip = 0, j = 1; 
    while (i >= 0) 
    { 
        ip = ip + (str[i] - '0') * j; 
        j = j * 10; 
        i--; 
    } 
  
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
  
// Function to separate Network ID as well as 
// Host ID and print them 
void separate(char str[], char ipClass) 
{ 
    // Initializing network and host array to NULL 
    char network[12], host[12]; 
    for (int k = 0; k < 12; k++) 
        network[k] = host[k] = '\0'; 
  
    // for class A, only first octet is Network ID 
    // and rest are Host ID 
    if (ipClass == 'A') 
    { 
        int i = 0, j = 0; 
        while (str[j] != '.') 
            network[i++] = str[j++]; 
        i = 0; 
        j++; 
        while (str[j] != '\0') 
            host[i++] = str[j++]; 
        printf("Network ID is %s\n", network); 
        printf("Host ID is %s\n", host); 
    } 
  
    // for class B, first two octet are Network ID 
    // and rest are Host ID 
    else if (ipClass == 'B') 
    { 
        int i = 0, j = 0, dotCount = 0; 
  
        // storing in network[] up to 2nd dot 
        // dotCount keeps track of number of 
        // dots or octets passed 
        while (dotCount < 2) 
        { 
            network[i++] = str[j++]; 
            if (str[j] == '.') 
                dotCount++; 
        } 
        i = 0; 
        j++; 
  
        while (str[j] != '\0') 
            host[i++] = str[j++]; 
  
        printf("Network ID is %s\n", network); 
        printf("Host ID is %s\n", host); 
    } 
  
    // for class C, first three octet are Network ID 
    // and rest are Host ID 
    else if (ipClass == 'C') 
    { 
        int i = 0, j = 0, dotCount = 0; 
  
        // storing in network[] up to 3rd dot 
        // dotCount keeps track of number of 
        // dots or octets passed 
        while (dotCount < 3) 
        { 
            network[i++] = str[j++]; 
            if (str[j] == '.') 
                dotCount++; 
        } 
  
        i = 0; 
        j++; 
  
        while (str[j] != '\0') 
            host[i++] = str[j++]; 
  
        printf("Network ID is %s\n", network); 
        printf("Host ID is %s\n", host); 
    } 
  
    // Class D and E are not divided in Network 
    // and Host ID 
    else
        printf("In this Class, IP address is not"
           " divided into Network and Host ID\n"); 
} 
  
// Driver function is to test above function 
int main() 
{ 
    char str[] = "192.226.12.11"; 
    char ipClass = findClass(str); 
    printf("Given IP address belongs to Class %c\n", 
                                           ipClass); 
    separate(str, ipClass); 
    return 0; 
} 


/*<Aishwarya> #include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
char c[20];
char *p;
int i,j,k,l;
printf("Enter String: ");
gets(c);
p=strtok(c,".");
i=atoi(p);

p=strtok(NULL,".");
j=atoi(p);

p=strtok(NULL,".");
k=atoi(p);

p=strtok(NULL,".");
l=atoi(p);

if(((i==168)||(i==255))||(l==255)||((i==0)&&(j==0)&&(k==0)&&(l==0))||((i==127)&&(j==0)&&(k==0)&&(l==0))||(i>255)||(j>255)||(i==0)||(k>255)||(l>255))
{
printf("Invalid IP\n");
exit(0);
}
else
{
printf("Valid IP\n");
if((i>=1)&&(i<=127))
printf("Class A\n");
else if((i>=128)&&(i<=191))
printf("Class B\n");
else if((i>=192)&&(i<=223))
printf("Class C\n");
else if((i>=224)&&(i<=239))
printf("Class D\n");
else if((i>=240)&&(i<=255))
printf("Class E\n");
else
printf("Invalid IP\n");
}	

}

