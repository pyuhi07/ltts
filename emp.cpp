#include<iostream>

using namespace std;

class Employee{
private:
	string name;
	double salary;
	float sales;
	int iD;
	float hra;
	
public:
	Employee();
	void getInfo();
	void disp();
	void setHRA();
	void setInterest();
};

Employee::Employee(){
	name="Vijay Dinanath Chauhaan";
	salary=400000;
	iD=00;
	sales=0;
}

void Employee::getInfo()
{
	cout<<"Enter your namee,iD, salary ans sales:";
	cin>>name>>iD>>salary>>sales;
	
}

void Employee::setInterest()
{
	hra=0.3*salary;
        salary+=hra;
	if(hra+salary>500000)
		salary+=100000;
	if(sales>2000000)
		salary+=0.1*sales;

	cout<<"incremented salary:"<<salary<<"HRA"<<hra;
}

void Employee::disp()
{
	cout<<"\n\nName:"<<name<<" iD:"<<iD<<" salary"<<salary<<" sales"<<sales;
}


int main()
{
	Employee e;
	e.disp();
	e.getInfo();
	e.setInterest();
	e.disp();


}
	
