
/*Create a class person having members name and age. Derive a class student 
having member percentage. Derive another class teacher having member 
salary. Write necessary member function to initialize, read and write data. 
Write also Main function (Multiple Inheritance)*/

#include<iostream>	
using namespace std;
class person//This is the base class
{
	public :
		
		int age;
		char name[30];
		
		void get_details()
		{
			cout<<"enter the person name : ";
			cin>>name;
			
			cout<<"enter the person age : ";
			cin>>age;
		}
};
class student//this is the derive class
{
	public :
		float per;
		void std_per()
		{
			cout<<"enter the student percantage : ";
			cin>>per;
		}
};
class teacher//this is the derive class
{
	public :
		int salary;
		
		void dis_salary()
		{
			cout<<"enter the teacher salary : ";
			cin>>salary;
		}
};
class details : public person,public student,public teacher//inherite multiple class..
{
	public :
		
		void display_alldetails()
		{
			cout<<"person name is : "<<name;
			cout<<"\nperson age is : "<<age;
			cout<<"\nstudent percantage is : "<<per;
			cout<<"\nteacher salary is : "<<salary;
		}
};
main()
{
	details d1;
	
	d1.get_details();
	d1.std_per();
	d1.dis_salary();
	d1.display_alldetails();
}
