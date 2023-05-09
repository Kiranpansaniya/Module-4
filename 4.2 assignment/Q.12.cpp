#include<iostream>
using namespace std;
class A
{
	private:
	int a,b;
	public:
	void get_data()
	{
		cout<<"enter the value of a : ";
		cin>>a;
		cout<<"enter the value of b : ";
		cin>>b;
		cout<<"Before swapping"<<endl<<"a value is : "<<a<<endl<<"b value is : "<<b<<endl;
	}
	void display_data()
	{
		cout<<"After swapping"<<endl<<"a value is : "<<a<<endl<<"b value is : "<<b<<endl;
	}
	////Declaration of friend fuction
	friend void swapno(A &s);
};
//swapping two value use to friend fuction
void swapno(A &s)
{
	s.a=s.a+s.b;
	s.b=s.a-s.b;
	s.a=s.a-s.b;
}
int main()
{
	A s;
	s.get_data();
	swapno(s);
	s.display_data();
}
