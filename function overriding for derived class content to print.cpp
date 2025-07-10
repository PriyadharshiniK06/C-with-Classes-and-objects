#include<iostream>
using namespace std;
class A
{
	public:
	int f()
	{
		return 67;
	}
};
class B:public A
{
	public:
		int f()
		{
			return 678;
		}
};
int main()
{
	B obj;
	cout<<obj.f();
}
