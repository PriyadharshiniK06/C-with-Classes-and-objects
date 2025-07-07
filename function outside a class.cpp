#include<iostream>
using namespace std;
class A
{
	public:
	void method();
};
void A::method()
{
	cout<<"hello everyone"<<endl;
}
int main()
{
	A obj;
	obj.method();
	
}
