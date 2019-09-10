#include<stdio.h> 
#include<string.h> 


  struct bio
{  char name[25];
   long int mobile;
   float salary;
   int age;
};
   

void main()
{  char n[25];
   long int m;
   float s;
   int a;
  
  struct bio b1;


  printf("Enter your name");
  scanf("%s",b1.name);
  printf("Enter your age");
  scanf("%d",&b1.age);
  printf("Enter your mobile number");
  scanf("%lu",&b1.mobile);
  printf("Enter your salary");
  scanf("%f",&b1.salary);

 

  printf("The employee details are:\n");
  printf("The employee name is %s\n",b1.name);
  printf("The employee mobile number is %lu\n",b1.mobile);
  printf("The employee salary is %f\n",b1.salary);
  printf("The employee age is %d\n",b1.age);
  
}
  

