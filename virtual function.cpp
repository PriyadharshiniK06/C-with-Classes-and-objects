#include<iostream>
using namespace std;
class A
{
	public:
		int x=56;
		void f()
		{
			std::cout<<"the x is :"<<x<<std::endl;
		}
};
class B:public A
{
	public:
		int y= 567;
		void f()
		{
			std::cout<<"the y is :"<<y<<std::endl;
		}
};
int main()
{
	A *a;
	B obj;
	a= &obj;
	obj.f();
	a->f();
}
