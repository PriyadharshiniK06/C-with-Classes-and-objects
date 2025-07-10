#include<iostream>
using namespace std;
class A
{
	public:
	void fn()
	{
		cout<<"Done"<<endl;
	}
};
class B
{
	public:
	int fun()
	{
		return 567;
	}
};
class C:public B,public A
{
	public:
	int x;
};
int main()
{
	C obj;
	obj.fn();
	cout<<obj.fun()<<endl;
	obj.x=89;
	cout<<obj.x<<endl;
}
