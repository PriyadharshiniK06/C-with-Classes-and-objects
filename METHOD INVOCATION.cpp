#include<iostream>
using namespace std;
class A
{
	public:
		int fun();
};
int A::fun()
{
	return 98;
}
int main()
{
	A obj;
	cout<<obj.fun();
}
