#include<iostream>
using namespace std;
class A
{
	public:
        void fn()
		{
			cout<<"Hi"<<endl;
		}	
};
class B:public A
{
	public:
		int fun()
		{
			return 45;
		}
};
class C:public A
{
	public:
		int func(int x)
		{
			return x;
		}
		
};
class D:public A
{
	public:
		void fun(int y)
		{
			cout<<"The number is :  "<<y<<endl;
		}
};
class E:public A
{
	public:
		int x;
};
int main()
{
	B obj;
	obj.fn();
	cout<<obj.fun()<<endl;
	C obje;
	cout<<obje.func(5)<<endl;
	obje.fn();
	D objec;
    objec.fun(34);
	objec.fn();
	E object;
	object.x=56;
	cout<<"The return is:"<<object.x<<endl;
	object.fn();
	
}
