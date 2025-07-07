#include<iostream>
using namespace std;
class A
{
	public :
		A()
		{
			cout<<"Priya\n";
		}
		A(int x)
		{
		     cout<<"x is "<<x<<endl;
		}
};
int main()
{
	A();
	A obj(45);
	return 0;
}
