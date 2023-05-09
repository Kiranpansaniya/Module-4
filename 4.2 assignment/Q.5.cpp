
/*Assume a class cricketer is declared. Declare a derived class batsman from 
cricketer. Data member of batsman. Total runs, Average runs and best 
performance. Member functions input data, calculate average runs, Display 
data. (Single Inheritance)*/

#include<iostream>
using namespace std;
class cricket
{
	protected :
		
	int total_run,total_over;
	float total_avg;
	
	public :
		
	void get_data(int a,int b,float c)
	{
		total_run=a;
		total_over=b;
		total_avg=c;
	}
};
//Batsman class inheritane to cricket class.....
class batsman : public cricket
{
	public :
	void get_data()
	{
		cout<<"enter the batsman run : ";
		cin>>total_run;
		
		cout<<"enter the over : ";
		cin>>total_over;
	
		total_avg=total_run/total_over;
	}
	void print_data()
	{
		cout<<"\ntotal run : "<<total_run;
		cout<<"\ntotal over : "<<total_over;
		cout<<"\ntotal average : "<<total_avg;
	}
};
main()
{
	batsman b1;
	b1.get_data();
	b1.print_data();
}
