#include<iostream>
using namespace std;
class A
{
	public:
	int add(int a, int b)
	{
		return a+b;
	}
	int add(double a, double b)//different datatype
	{
		return (double)a+b;
	}
	int add(int a,int b,int c,int d)//different number of parameters.
	{
		return a+b+c+d;
	}
};//double can be added with int but float cannot be added with double and int 
int main()
{
	A O;
	cout<<O.add(2,3)<<endl;
	cout<<O.add(4.34,1.12)<<endl;
	cout<<O.add(1,5,6,7)<<endl;
}
