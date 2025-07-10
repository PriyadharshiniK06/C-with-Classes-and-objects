#include<iostream>
using namespace std;
class A
{
	public:
	void f()
	{
		cout<<"HI"<<endl;
	}
};
class B:public A
{
	public:
		void f()
		{
			cout<<"hifi"<<endl;
			
		}
};
class C:public A
{
	public:
		void f()
		{
			cout<<"life"<<endl;
		}
};
int main()
{
	A o;
	B ob;
	C obj;
	o.f();
	ob.f();
	obj.f();
}

